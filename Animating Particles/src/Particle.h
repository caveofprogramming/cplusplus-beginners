/*
 * Particle.h
 *
 *  Created on: 13 Sep 2014
 *      Author: johnwpurcell
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace caveofprogramming {

struct Particle {
	double m_x;
	double m_y;

	double m_xspeed;
	double m_yspeed;

public:
	Particle();
	virtual ~Particle();
	void update();
};

} /* namespace caveofprogramming */

#endif /* PARTICLE_H_ */
