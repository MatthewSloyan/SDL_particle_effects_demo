/*
 * Swarm.hpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#ifndef SWARM_HPP_
#define SWARM_HPP_

#include "Particle.hpp"

namespace testnamespace {

class Swarm {
public:
	const static int NPARTICLES = 5000;

private:
	Particle *m_particles;

public:
	Swarm();
	virtual ~Swarm();

	Particle * const getParticles() { return m_particles; };
};

} /* namespace testnamespace */

#endif /* SWARM_HPP_ */
