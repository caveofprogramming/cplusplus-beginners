/*
 * Particle.h
 *
 *  Created on: Aug 24, 2014
 *      Author: johnpurcell
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace jwp {

class Particle {
private:
	double m_direction;
	double m_speed;

	double m_x;
	double m_y;

	unsigned char m_red;
	unsigned char  m_green;
	unsigned char  m_blue;

	double m_xSpeed;
	double m_ySpeed;

	int m_lifetime;

	int m_lifespan;

	double m_curl;

private:
	void initState();
	void calculateXYSpeed();


public:
	Particle();
	virtual ~Particle();
	void update(int interval, int elapsed);

	unsigned char  red() const { return m_red; }
	unsigned char  green() const { return m_green; }
	unsigned char  blue() const { return m_blue; }
	double x() const { return m_x; }
	double y() const { return m_y; }
};

} /* namespace jwp */

#endif /* PARTICLE_H_ */
