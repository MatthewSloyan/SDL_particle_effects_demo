/*
 * Particle.hpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#ifndef PARTICLE_HPP_
#define PARTICLE_HPP_

namespace testnamespace {

struct Particle {
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();

	void update(int interval);
};

} /* namespace testnamespace */

#endif /* PARTICLE_HPP_ */
