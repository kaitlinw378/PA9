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