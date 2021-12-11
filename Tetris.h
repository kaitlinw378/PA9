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
*						  Tetris. This class runs the game of Tetris.
*
***************************************************************************/
#pragma once

#include "Rectangle.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Piece.h"
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
	Tetris() {}
	~Tetris() {}
	bool runTetris();
	bool display();
	int getScore(int& score, int& currentLevel, int& numLinesCleared);

private:
	int runMenu();
	int displayMenu(sf::RenderWindow& window);
	void play();
	void displayGameRules();
	int displayScores();
	void displayHighScore(sf::RenderWindow& window);
	void displayPlayerScore(sf::RenderWindow& window, int& score);
	void addLineScore(int& score, int& currentLevel, int& numLinesCleared);
	void addStaticScore(int& score, int& currentLevel);
};
