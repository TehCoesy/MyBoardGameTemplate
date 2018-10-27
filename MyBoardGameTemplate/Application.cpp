#include "Application.h"

Application::Application() {
	m_window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "MyBoardGame", sf::Style::Close);
	m_window.setFramerateLimit(60);
	game = Game(m_window, BOARD_GRID);
}

void Application::runMainLoop() {
	sf::Event eventMain;
	while (m_window.isOpen()) {
		m_window.pollEvent(eventMain);

		if (eventMain.type == sf::Event::Closed) {
			m_window.close();
			break;
		}

		m_window.clear();
		updateGame();
		m_window.display();
	}
}

void Application::updateGame() {
	game.update();
}