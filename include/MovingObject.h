#include "GameObject.h"

class MovingObject :public GameObject
{
public:

	MovingObject();

	virtual void move(float deltaTime) = 0; // Pure virtual function for moving the object
	 
private:

	float m_speed; // Speed of the moving object
	sf::Vector2f m_direction; // Direction of movement

	 
};