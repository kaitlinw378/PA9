#pragma once

#include <SFML/Graphics.hpp>
#include <ctime>

#include "ipiece.h"
#include "opiece.h"
#include "lpiece.h"
#include "jpiece.h"
#include "spiece.h"

class GamePiece{
public:
	void getPieceType();
	void drawPiece(sf::RenderWindow& window);
private:
	vector<Vector2i> currentPieceType;
	vector<Vector2i> nextPieceType;

	Ipiece ipiece;
	Opiece opiece;
	Lpiece lpiece;
	Jpiece jpiece;
	Spiece spiece;
};
