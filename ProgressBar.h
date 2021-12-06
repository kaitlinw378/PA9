#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include <Windows.h>
//#include <Mouse.hpp>

using sf::Vector2i;
using sf::Window;
using sf::Mouse;

using std::cout;
using std::cin;
using std::endl;

class ProgressBar : public sf::RectangleShape
{
public:
	ProgressBar(const sf::Vector2f& newSize,
		const sf::Color& newColor,
		const sf::Vector2f& newPosition) :
		sf::RectangleShape(newSize)
	{
		this->setPosition(newPosition);
		this->setFillColor(newColor);
	}

private:
	void runBar();
};