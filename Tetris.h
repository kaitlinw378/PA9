#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
//#include "GamePiece.h"
#include "piece.h"
#include <fstream>
#include <string.h>
#include <sstream>

using sf::Vector2i;
using sf::Window;
using sf::Mouse;

using std::fstream;

using std::cout;
using std::cin;
using std::endl;

class Tetris
{
public:
	Tetris();
	~Tetris();
	bool runTetris();
	bool display();

private:
	int runMenu();
	int displayMenu(sf::RenderWindow& window);
	void displayStartUpScreen();
	void displayClosingScreen();
	void play();
	void displayGameRules();
	int displayScores();
	void viewScores();
	void addLineScore(int& score, int& currentLevel, int& numLinesCleared);
	void addStaticScore(int& score, int& currentLevel);

};
