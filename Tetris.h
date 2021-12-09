#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
//#include <Mouse.hpp>
//#include "GamePiece.h"
#include "piece.h"

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
	void runMenu(sf::RenderWindow& window);
	void displayMenu(sf::RenderWindow& window);
	void displayStartUpScreen();
	void displayClosingScreen();
	void play();
	void displayGameRules();
<<<<<<< HEAD
	void displayScores();
=======
	void viewScores();
	int calculateScore(int& currentLevel, int& numLinesCleared);
>>>>>>> 8372af5f2e83a358804a2b5f1c6d734cb05c1820

};
