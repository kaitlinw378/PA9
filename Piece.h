#pragma once

#include "Blocks.h"
#include "Rectangle.h"

#include <SFML/Graphics.hpp>

using sf::Keyboard;

#include <vector>
using sf::Vector2i;
using sf::Vector2f;
using std::vector;

class Piece {
private:
	Blocks blocks[4];
	int x_pos = 200;
	int y_pos = 0;
	Vector2f boundsCord;
	bool timeLoop = false;
	int rotateRight = 4;
public:
	Piece();
	Vector2f getLowestCord(int& r);
	//Vector2f getBoundCord(Vector2f& v);
	void timeDelay(bool& t);
	void resetTimeLoop(bool& t);
	int getXpos(Blocks& block);
	int getYpos(Blocks& block);
	void setXpos(int& xpos);
	void setYpos(int& ypos);
	void updateCoords(Blocks& block);
	void draw(sf::RenderWindow& window);
	void moveDown(sf::RenderWindow& window, Rectangle& rect);
	void pieceFall(sf::RenderWindow& window);
	void rotatePieceRight(int& r);
};
