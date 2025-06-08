#include <SFML/Graphics.hpp>
#include "MovingObject.h"


class snake : public MovingObject
{
    public:

        snake(sf::Texture& head);
		void move(float deltaTime) override; 
        void draw(sf::RenderWindow& window);


private:
	  
	std::vector<sf::Vector2f> m_bodyParts; 
	float m_speed; 
	sf::Vector2f m_direction; 
};