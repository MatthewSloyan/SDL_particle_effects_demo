/*
 * Particle.cpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#include "Particle.hpp"
#include <stdlib.h>
#include <math.h>

namespace testnamespace {

Particle::Particle(): m_x(0), m_y(0){
	m_speed = (0.0001 * rand())/RAND_MAX;
	m_direction = (2 * M_PI * rand())/RAND_MAX;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update(int interval) {
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed * interval;
	m_y += yspeed * interval;
}

} /* namespace testnamespace */
