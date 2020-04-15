/*
 * Particle.cpp
 *
 *  Created on: Aug 24, 2014
 *      Author: johnpurcell
 */

#include <math.h>
#include <stdlib.h>
#include "Particle.h"

// TODO remove
#include <iostream>
using namespace std;

namespace jwp {

Particle::Particle() :
		m_direction(0), m_speed(0), m_x(0), m_y(0), m_red(0), m_green(0), m_blue(
				0), m_xSpeed(0), m_ySpeed(0), m_lifetime(0), m_lifespan(0), m_curl(0.01) {

	initState();
	calculateXYSpeed();
}

Particle::~Particle() {

}

void Particle::initState() {
	m_direction = (2 * M_PI * rand()) / RAND_MAX;
	m_speed = (0.4 * rand()) / RAND_MAX + 0.0001;

	m_speed = m_speed * m_speed;

	m_x = 0.0;
	m_y = 0.0;

	m_red = 0xFF;
	m_green = 0xFF;
	m_blue = 0xFF;

	m_lifespan = (100000.0 * rand()) / RAND_MAX;
	m_lifetime = 0;
}

void Particle::calculateXYSpeed() {
	m_xSpeed = m_speed * cos(m_direction);
	m_ySpeed = m_speed * sin(m_direction);
}

void Particle::update(int interval, int elapsed) {

	m_direction += m_curl;
	calculateXYSpeed();

	m_x += m_xSpeed * interval;
	m_y += m_ySpeed * interval;

	m_lifetime += interval;

	if (m_lifetime > m_lifespan) {
		initState();
	}

	if (m_x < -1.0 || m_x > 1.0 || m_y < -1.0 || m_y > 1.0) {
		initState();
	}

	// TODO unsigned char?
	m_red = (1 + sin(elapsed * 0.0001)) * 0x80;
	m_green = (1 + sin(elapsed * 0.0002)) * 0x80;
	m_blue = (1 + sin(elapsed * 0.0003)) * 0x80;
}

} /* namespace jwp */
