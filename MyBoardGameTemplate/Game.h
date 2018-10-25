#ifndef GAME_H
#define GAME_H

//Playing Board basic properties

#define GRID_OFFSET 80
#define GAME_GRID_BORDER 4

#include <SFML/Graphics.hpp>

class Game {
public:
	Game();
	Game(sf::RenderWindow& window, int boardSize);
	void init();

	void update();
	void draw();
private:
	void calculateGrid();
	void drawGrid();

	sf::RenderWindow* m_window;
	

	sf::Vector2u windowSize;

	//Grid controls
	int boardSize, gridUnitSize;

	//Mouse controls
	sf::Mouse mouse;
	bool mouse_onHold = false;
};
#endif // !GAME_H

