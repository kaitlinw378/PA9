/***************************************************************************
* Programmer: Grant Erickson, Spenceer, Caleb Peterson, Kaitlin White
* Class: CptS 122;
* Programming Assignment: Programming assignment 9
* Date:  12/1/2021
*
*       Program Description: This program runs a retro game application.
*							 The retro game application stores multiple
*							 different games. As of now tetris is the
*						     only game available.
*
*		File Description: This file stores the the class definition for
*						  the individual blocks for the of the peices. Each
*						  piece is made from an assortment of these blocks.
*
***************************************************************************/
#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Blocks : public sf::RectangleShape {
private:
	/*int pieceType;
	int x_pos = 1;
	int y_pos = 0;*/

public:
	Blocks();
	Blocks(const sf::Vector2f& newSize,
		const sf::Color& newColor,
		const sf::Vector2f& newPosition, const sf::Color& newOutlineColor, const float& newOutlineThickness) :
		sf::RectangleShape(newSize)
	{
		this->setPosition(newPosition);
		this->setFillColor(newColor);
		this->setOutlineColor(newOutlineColor);
		this->setOutlineThickness(newOutlineThickness);
	}


	//void updateYCords(vector<Vector2i>& vec);
	//vector<Vector2i> getBlockInfo(int x_pos, int y_pos);



};
