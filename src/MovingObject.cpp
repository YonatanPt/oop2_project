#include "MovingObject.h"


MovingObject::MovingObject(sf::Texture& texture)
	:GameObject(texture), m_speed(0.0f), m_direction(0.0f, 0.0f)
{
}

