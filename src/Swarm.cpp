/*
 * Swarm.cpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#include "Swarm.hpp"

namespace testnamespace {

Swarm::Swarm() {
	m_particles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete[] m_particles;
}

void Swarm::update() {
	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_particles[i].update();
	}
}

} /* namespace testnamespace */
