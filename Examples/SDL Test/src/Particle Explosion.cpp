//============================================================================
// Name        : Particle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include "Swarm.h"

using namespace std;
using namespace jwp;

int main() {

	srand(time(NULL));

	Screen screen;
	screen.init();

	Swarm swarm;

	int halfWidth = screen.width() / 2;
	int halfHeight = screen.height() / 2;

	while (true) {

		swarm.update(SDL_GetTicks());

		const Particle * const pParticles = swarm.particles();

		for (int i = 0; i < swarm.size(); i++) {
			int x = pParticles[i].x() * halfWidth + halfWidth;
			int y = pParticles[i].y() * halfWidth + halfHeight;

			screen.setPixel(x, y, pParticles[i].red(), pParticles[i].green(),
					pParticles[i].blue());
		}

		screen.boxBlur();
		screen.update();

		if (!screen.processEvents()) {
			break;
		}
	}

	screen.close();

	return 0;
}
