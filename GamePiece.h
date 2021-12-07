#pragma once

#include <SFML/Graphics.hpp>
#include <ctime>

#include "ipiece.h"
#include "opiece.h"
#include "lpiece.h"
#include "jpiece.h"
#include "spiece.h"
#include "zpiece.h"
#include "tpiece.h"
#include "Rectangle.h"

class GamePiece{
public:
	void getPieceType();
	void drawPiece(sf::RenderWindow& window);
	void movePiece(sf::RenderWindow& window, const sf::Vector2f& newSize,
		const sf::Color& newColor, const sf::Vector2f& newPosition, sf::Color& newOutlineColor, float& newOutlineThickness);

private:
	vector<Vector2i> currentPieceType;
	vector<Vector2i> nextPieceType;

	Ipiece ipiece;
	Opiece opiece;
	Lpiece lpiece;
	Jpiece jpiece;
	Spiece spiece;
	Zpiece zpiece;
	Tpiece tpiece;
};
