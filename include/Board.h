#pragma once	
#include "GameObject.h"

#include <SFML/Graphics.hpp>
class Board : public GameObject
{
public:
	Board(sf::Texture& texture);
	 
	void draw(sf::RenderWindow& window) override;
	 
};