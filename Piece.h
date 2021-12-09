#pragma once

#include "blocks.h"
#include "Rectangle.h"

#include <SFML/Graphics.hpp>

using sf::Keyboard;

#include <vector>
using sf::Vector2i;
using sf::Vector2f;
using std::vector;

class Piece {
private:


	//int pieceType;
	//vector<Vector2i> pieceV;
	Blocks blocks[4];
	//int pieceType;
	int x_pos = 200;
	int y_pos = 0;
	//int x = 1, y = 0;
public:
	Piece();
	void updateCoords(int y);
	void draw(sf::RenderWindow& window);
	void moveDown(sf::RenderWindow& window, Rectangle& rect);
	//void drawFirst(sf::RenderWindow& window);
	//Piece(int pT);
	//
	//bool move_down(sf::RenderWindow& window);
	//int get_shape();
	////void update_matrix(std::vector<std::vector<int>>& i_matrix);
	//vector<Vector2i> get_minos();
	//vector<Vector2i> updateYCords();
	//vector<Vector2i> getBlockInfo(int x_pos, int y_pos);
	//void pieceControl();
};
