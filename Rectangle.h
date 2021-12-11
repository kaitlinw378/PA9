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
*						  Rectangle. This class inherits from RectangleShape.
*						  We used this class to create the graphics for the
*						  menus.
*
***************************************************************************/
#pragma once

#include <SFML/Graphics.hpp>

class Rectangle : public sf::RectangleShape
{
public:
	Rectangle (const sf::Vector2f& newSize,
		const sf::Color& newColor,
		const sf::Vector2f& newPosition, const sf::Color& newOutlineColor, const float& newOutlineThickness) :
		sf::RectangleShape(newSize)
	{
		this->setPosition(newPosition);
		this->setFillColor(newColor);
		this->setOutlineColor(newOutlineColor);
		this->setOutlineThickness(newOutlineThickness);
	}

private:

};