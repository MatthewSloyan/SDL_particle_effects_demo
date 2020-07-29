/*
 * Particle.cpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#include "Particle.hpp"
#include <stdlib.h>

namespace testnamespace {

Particle::Particle(): m_x(0), m_y(0){

	m_xspeed = 0.002 * (((2.0 * rand()) / RAND_MAX) - 1);
	m_yspeed = 0.002 * (((2.0 * rand()) / RAND_MAX) - 1);
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update() {
	m_x += m_xspeed;
	m_y += m_yspeed;

	// Change direction.
	if (m_x <= -1.0 || m_x >= 1.0) {
		m_xspeed = -m_xspeed;
	}

	if (m_y <= -1.0 || m_y >= 1.0) {
		m_yspeed = -m_yspeed;
	}
}

} /* namespace testnamespace */
