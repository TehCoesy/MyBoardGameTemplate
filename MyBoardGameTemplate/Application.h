#ifndef APPLICATION_H
#define APPLICATION_H

//Modify main Window size
//For now prefer square Windows, check calculateGrid() in Game to see how the playing Board is determined
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800
#define BOARD_GRID 6

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
