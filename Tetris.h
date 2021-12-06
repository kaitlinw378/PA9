#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
//#include <Mouse.hpp>

using sf::Vector2i;
using sf::Window;
using sf::Mouse;

using std::cout;
using std::cin;
using std::endl;

class Tetris
{
public:
	Tetris();
	~Tetris();
	void runTetris();

private:
	void runMenu();
	void displayMenu();
	void displayStartUpScreen();
	void displayClosingScreen();
	void play();
	void displayGameRules();
	void viewScores();

};