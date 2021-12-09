#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <Windows.h>
//#include <Mouse.hpp>

using sf::Vector2i;
using sf::Window;
using sf::Mouse;

using std::cout;
using std::cin;
using std::endl;

class Tab : public sf::RectangleShape
{
public:
	Tab(const sf::Vector2f& newSize,
		const sf::Color& newColor,
		const sf::Vector2f& newPosition, const sf::Color& newOutlineColor, const float& newOutlineThickness) :
		sf::RectangleShape(newSize)
	{
		this->setPosition(newPosition);
		this->setFillColor(newColor);
		this->setOutlineColor(newOutlineColor);
		this->setOutlineThickness(newOutlineThickness);
	}
};