/*
 * Screen.hpp
 *
 *  Created on: 29 Jul 2020
 *      Author: matthewsloyan
 */

#ifndef SCREEN_HPP_
#define SCREEN_HPP_

#include <SDL.h>

namespace testnamespace {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;

public:
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	bool close();
};

} /* namespace testnamespace */

#endif /* SCREEN_HPP_ */
