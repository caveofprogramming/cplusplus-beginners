/*
 * Particle.cpp
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#include "Particle.h"
#include <stdlib.h>

namespace caveofprogramming {

Particle::Particle() {
	m_x = ((2.0 * rand()) / RAND_MAX) - 1;
	m_y = ((2.0 * rand()) / RAND_MAX) - 1;

	m_xspeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);
	m_yspeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update() {
	m_x += m_xspeed;
	m_y += m_yspeed;

	if (m_x <= -1.0 || m_x >= 1.0) {
		m_xspeed = -m_xspeed;
	}

	if (m_y <= -1.0 || m_y >= 1.0) {
		m_yspeed = -m_yspeed;
	}
}

} /* namespace caveofprogramming */
