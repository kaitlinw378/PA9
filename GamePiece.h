#pragma once

#include <SFML/Graphics.hpp>

using sf::Vector2i;

class GamePiece {
public:
	GamePiece createPiece();
	void displayPiece();

private:
	
	Vector2i s1[4];
	
};
