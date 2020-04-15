/*
 * Swarm.h
 *
 *  Created on: Aug 24, 2014
 *      Author: johnpurcell
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace jwp {

class Swarm {
private:
	const static int NPARTICLES = 5000;
	int m_lastTime;
	Particle *m_pParticles;

public:
	Swarm();
	virtual ~Swarm();
	const int size() { return NPARTICLES; }
	const Particle * const particles() { return m_pParticles; }
	void update(int ticks);
};

} /* namespace jwp */

#endif /* SWARM_H_ */
