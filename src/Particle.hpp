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

public:
	Particle();
	virtual ~Particle();
};

} /* namespace testnamespace */

#endif /* PARTICLE_HPP_ */
