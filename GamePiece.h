#pragma once

#include <SFML/Graphics.hpp>
#include <ctime>

#include "ipiece.h"

class GamePiece{
public:
	void getPieceType();
	void drawPiece(sf::RenderWindow& window);
private:
	vector<Vector2i> currentPieceType;
	vector<Vector2i> nextPieceType;

	Ipiece ipiece;
};
