/*
 * Particle.cpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#include "Particle.hpp"
#include <stdlib.h>

namespace testnamespace {

Particle::Particle() {
	m_x = ((2.0 * rand())/RAND_MAX) - 1;
	m_y = ((2.0 * rand())/RAND_MAX) - 1;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace testnamespace */
