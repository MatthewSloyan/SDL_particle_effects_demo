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
#include "Screen.hpp"

using namespace std;
using namespace testnamespace;

int main() {

	Screen screen;
	if (screen.init() == false) {
		cout << "Error initialising SDL" << endl;
	}

	while (true) {
		//Update particles

		//Draw particles
		for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, 128, 0, 255);
			}
		}

		screen.setPixel(400, 300, 255, 255, 255);

		screen.update();

		//Check for messages/event
		if (screen.processEvents() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}
