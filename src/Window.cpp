#include "Window.h"
#include <SFML/Graphics.hpp>
Window::Window(const int high, const int width)
	:m_high(high), m_width(width) 
{
     createWindow();
}

//==========createWindow==========
void Window::createWindow()
{
	m_window.create(sf::VideoMode(m_width, m_high), "SFML Window", sf::Style::Close | sf::Style::Resize); // Create the window with specified dimensions and title
	m_window.setFramerateLimit(60); // Set a frame rate limit for smoother rendering
}

//==========getWindow==========
sf::RenderWindow& Window::getWindow()
{
    return m_window; 
}
 
