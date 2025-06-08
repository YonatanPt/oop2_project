#include "snake.h"

snake::snake(sf::Texture& head)
	:MovingObject(head), m_speed(10.0f), m_direction(0.0f, 0.0f) // Initialize speed and direction
{
    m_sprite.setPosition(100.0f, 100.0f);  
	m_bodyParts.push_back(sf::Vector2f(100.0f, 100.0f)); // Add initial body part position
	m_sprite.setPosition(m_bodyParts[0]); // Set the sprite position to the first body part
    m_sprite.setOrigin(m_texture.getSize().x / 2.0f, m_texture.getSize().y / 2.0f);
}

//==========move===========
void snake::move(float deltaTime)
{
    // עדכון כיוון לפי קלט מהחיצים - זוויות נכונות לפי SFML
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        m_direction = sf::Vector2f(0.0f, -1.0f);
        m_sprite.setRotation(180.f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        m_direction = sf::Vector2f(0.0f, 1.0f);
        m_sprite.setRotation(0.f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        m_direction = sf::Vector2f(-1.0f, 0.0f);
        m_sprite.setRotation(90.f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        m_direction = sf::Vector2f(1.0f, 0.0f);
        m_sprite.setRotation(270.f);
    }

    // עדכון מיקום הראש
    sf::Vector2f movement = m_direction * m_speed * deltaTime;
    m_sprite.move(movement);

    // עדכון מיקום הגוף (פשוט: כל חלק עוקב אחרי הקודם)
    if (!m_bodyParts.empty()) {
        m_bodyParts[0] = m_sprite.getPosition();
    }
}






//==========draw===========	
void snake::draw(sf::RenderWindow& window)
{
	window.draw(m_sprite);
}
