#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>

Game::Game() {

}

Game::Game(sf::RenderWindow& window, int boardSize) {
	m_window = &window;
	this->boardSize = boardSize;

	init();
}

void Game::init() {
	windowSize = m_window->getSize();
}

void Game::update() {

	if (mouse.isButtonPressed(sf::Mouse::Left) && !mouse_onHold) {
		std::cout << "Left Click!";
		mouse_onHold = true;
	}
	else if (!mouse.isButtonPressed(sf::Mouse::Left)) {
		mouse_onHold = false;
	}

	draw();
}

void Game::draw() {
	drawGrid();
}

void Game::drawGrid() {
	for (int i = 0; i < boardSize; i++) {
		for (int k = 0; k < boardSize; k++) {
			sf::RectangleShape newRect;
			newRect.setSize(sf::Vector2f(50, 50));
			newRect.setPosition(GRID_OFFSET + 70 * i, GRID_OFFSET + 70 * k);
			newRect.setFillColor(sf::Color::Transparent);
			newRect.setOutlineColor(sf::Color::White);
			newRect.setOutlineThickness(GAME_GRID_BORDER);
			m_window->draw(newRect);
		}
	}
}

void Game::calculateGrid() {
	int boardArea = 
}