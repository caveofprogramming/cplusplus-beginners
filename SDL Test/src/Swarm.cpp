/*
 * Swarm.cpp
 *
 *  Created on: Aug 24, 2014
 *      Author: johnpurcell
 */

#include "Swarm.h"
#include <stdlib.h>

namespace jwp {

Swarm::Swarm(): m_lastTime(0), m_pParticles(NULL) {
	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete[] m_pParticles;
}

void Swarm::update(int ticks) {
	for(int i=0; i<NPARTICLES; i++) {
		m_pParticles[i].update(ticks - m_lastTime, ticks);
	}

	m_lastTime = ticks;
}

} /* namespace jwp */
