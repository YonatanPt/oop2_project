#include <SFML/Graphics.hpp>  // For graphics, windows, and drawing
#include <SFML/Window.hpp>    // For window management and input
#include <SFML/System.hpp>    // For system utilities (threads, time, etc.)
#include <SFML/Audio.hpp>     // For audio playback and recording
#include <SFML/Network.hpp>   // For networking features

#include "Window.h"
class Game
{
public:

	Game();

	void run();
	void update();
	void render();

private:

	Window m_window; // Window object for rendering
	sf::Clock m_clock; // Clock to manage time
 	
};