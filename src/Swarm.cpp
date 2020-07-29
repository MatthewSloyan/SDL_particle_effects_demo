/*
 * Swarm.cpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#include "Swarm.hpp"

namespace testnamespace {

Swarm::Swarm(): lastTime(0){
	m_particles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete[] m_particles;
}

void Swarm::update(int elapsed) {

	int interval = elapsed - lastTime;

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_particles[i].update(interval);
	}

	lastTime = elapsed;
}

} /* namespace testnamespace */
