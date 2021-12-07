#pragma once

#include <SFML/Graphics.hpp>

#include "ipiece.h"

class GamePiece{
public:
	vector<Vector2i> getPieceType();
	void drawPiece(sf::RenderWindow& window, vector<Vector2i> &pieceType);
private:
	Ipiece ipiece;
};
