/*
 * Screen.cpp
 *
 *  Created on: Aug 23, 2014
 *      Author: johnpurcell
 */

#include "Screen.h"
#include <SDL.h>

namespace jwp {

Screen::Screen() :
		m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer1(NULL), m_buffer2(
		NULL), m_frontBuffer(NULL), m_backBuffer(NULL) {

	m_buffer1 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
	m_buffer2 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

	m_frontBuffer = m_buffer1;
	m_backBuffer = m_buffer2;

	memset(m_buffer1, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
	memset(m_buffer2, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
}

Screen::~Screen() {

}

void Screen::setPixel(int x, int y, unsigned char red, unsigned char green,
		unsigned char blue) {
	if (x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT) {
		return;
	}

	m_frontBuffer[y * SCREEN_WIDTH + x] = ((green) << GREEN_SHIFT)
			+ ((blue) << BLUE_SHIFT) + ((red) << RED_SHIFT);
}

void Screen::boxBlur() {

	// Swap front buffer to back.
	Uint32 *temp = m_frontBuffer;
	m_frontBuffer = m_backBuffer;
	m_backBuffer = temp;

	for (int x = 0; x < SCREEN_WIDTH; x++) {
		for (int y = 0; y < SCREEN_HEIGHT; y++) {

			int redTotal = 0;
			int greenTotal = 0;
			int blueTotal = 0;

			for (int row = -1; row <= 1; row++) {
				for (int col = -1; col <= 1; col++) {
					unsigned char red;
					unsigned char green;
					unsigned char blue;

					if (x < 1 || x >= SCREEN_WIDTH-1 || y < 1
							|| y >= SCREEN_HEIGHT-1) {
						red = 0;
						green = 0;
						blue = 0;
					} else {
						Uint32 color = m_backBuffer[(y+col) * SCREEN_WIDTH + (x+row)];
						red = color >> RED_SHIFT;
						green = color >> GREEN_SHIFT;
						blue = color >> BLUE_SHIFT;
					}

					redTotal += red;
					greenTotal += green;
					blueTotal += blue;
				}
			}

			unsigned char red = redTotal / 9;
			unsigned char green = greenTotal / 9;
			unsigned char blue = blueTotal / 9;

			setPixel(x, y, red, green, blue);
		}
	}
}

void Screen::close() {
	delete[] m_buffer1;
	delete[] m_buffer2;
	SDL_DestroyTexture(m_texture);
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}

void Screen::update() {
	SDL_UpdateTexture(m_texture, NULL, m_frontBuffer,
			SCREEN_WIDTH * sizeof(Uint32));
	SDL_RenderClear(m_renderer);
	SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
	SDL_RenderPresent(m_renderer);
}

bool Screen::processEvents() {
	SDL_Event event;

	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_QUIT) {
			return false;
		}
	}

	return true;
}

bool Screen::init() {

	m_window = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		return false;
	}

	m_window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (m_window == NULL) {
		return false;
	}

	m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);

	m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

	m_buffer1 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
	m_buffer2 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

	return true;
}

} /* namespace jwp */
