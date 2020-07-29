//============================================================================
// Name        : main.cpp
// Author      : Matthew Sloyan
// Version     :
// Copyright   : Your copyright notice
// Description : Main runner of SDL application. Code followed and adapted from
// 				 Udemy C++ lessons to learn more about C++.
//============================================================================

#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#include "Screen.hpp"
#include "Swarm.hpp"

using namespace std;
using namespace testnamespace;

int main() {

	// Set random seed.
	srand(time(NULL));

	Screen screen;
	if (screen.init() == false) {
		cout << "Error initialising SDL" << endl;
	}

	Swarm swarm;

	while (true) {
		//Update particles

		//Draw particles
		int elapsed = SDL_GetTicks();

		screen.clear();
		swarm.update();

		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

		const Particle * const pParticles = swarm.getParticles();
		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
			int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT/2;

			screen.setPixel(x, y, red, green, blue);
		}

		// Fills entire screen.
		/*for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, red, green, blue);
			}
		}*/

		screen.update();

		//Check for messages/event
		if (screen.processEvents() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}
