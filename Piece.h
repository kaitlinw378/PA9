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
	int y_pos = -87;
	bool timeLoop = false;
	int rotateRight = 4;
public:
	Piece();
	Piece(int& num);
	void timeDelay(bool& t);
	void resetTimeLoop(bool& t);
	int getXpos(Blocks& block);
	int getYpos(Blocks& block);
	void setXpos(int& xpos);
	void setYpos(int& ypos);
	void draw(sf::RenderWindow& window);
	bool moveDown(sf::RenderWindow& window, Rectangle& rect, Rectangle& left, Rectangle& right, bool& collision);
	void pieceFall(sf::RenderWindow& window);
	void rotatePieceRight();
	void rotatePieceDown();
	void rotatePieceLeft();
	void rotatePieceUp();
	void moveRight();
	void moveLeft();
	sf::FloatRect getBounds();
	bool colisionCheck(vector<Piece>& vec);
	void setBlocksPosition(int& bl, Vector2f& vec);
	Vector2f getBlocksPosition(int& bl);
};
