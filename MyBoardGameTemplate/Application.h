#ifndef APPLICATION_H
#define APPLICATION_H

//Modify main Window size
//For now prefer Square Windows, check calculateGrid() in Game too see how the Playing Board is determined
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

#include <SFML/Graphics.hpp>
#include "Game.h"

class Application {
public :
	Application();
	void runMainLoop();

private:
	//Calls game update()
	void updateGame();

	Game game;
	sf::RenderWindow m_window;
};

#endif APPLICATION_H // !
