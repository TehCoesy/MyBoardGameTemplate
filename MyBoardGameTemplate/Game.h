#ifndef GAME_H
#define GAME_H

//Playing Board basic properties

#define BOARD_OFFSET 80 //Space between Window's edges and the PlayingBoard
#define GAME_GRID_BORDER 4 //Grid block's border thickness
#define GRID_BLOCK_SPACE -4 //Space between every grid block, set to either 0 or greater than GRID_OFFSET

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

