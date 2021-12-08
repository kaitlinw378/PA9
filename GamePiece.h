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
<<<<<<< HEAD
	void getPieceType();
	void drawPiece(sf::RenderWindow& window);
=======
	int generateChoice();
	void getPieceType(int randomNum);
	sf::RectangleShape drawPiece(sf::RenderWindow& window);
	//sf::RectangleShape getShape();
	//void setShape(sf::RectangleShape& sh);
	void controlPiece(sf::RenderWindow &window);
	void movePiece(sf::RenderWindow& window, const sf::Vector2f& newSize,
		const sf::Color& newColor, const sf::Vector2f& newPosition, sf::Color& newOutlineColor, float& newOutlineThickness);
>>>>>>> 350adc3f7683b892c9cdfbe4cd0df7d1d00c6beb

private:
	int pieceDrop = 0;
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
