#include "Game.h"

Game::Game()
	:m_window(800, 600) // Initialize the window with width and height
{
	run();
}

//==========run==========
void Game::run()
{
	while (m_window.isOpen()) // Main game loop
	{
		sf::Event event;
		while (m_window.getWindow().pollEvent(event)) // Poll for events
		{
			if (event.type == sf::Event::Closed) // Check if the window is closed
			{
				m_window.getWindow().close(); // Close the window
			}
		}
		update(); // Update game logic
		render(); // Render the game
	}
}

//==========update==========
void Game::update()
{
}

//==========render==========
void Game::render()
{
}
