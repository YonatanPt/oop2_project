#include <SFML/Graphics.hpp>

class Window
{
public:
	Window(const int high,const int width);

	void createWindow(); // Function to create the window
	sf::RenderWindow& getWindow(); // Function to get the window reference
	bool isOpen() const { return m_window.isOpen(); } // Check if the window is open
private:

	sf::RenderWindow m_window; // The SFML window for rendering
	         
	int m_high;                // Height of the window
	int m_width;               // Width of the window
};