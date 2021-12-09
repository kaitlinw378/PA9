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
