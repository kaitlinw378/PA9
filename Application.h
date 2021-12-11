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
*						  Application, which runs "Retro Runner"
*
***************************************************************************/
#pragma once

#include "Tetris.h"
#include <Windows.h>
#include "Rectangle.h"
#include "Tab.h"

class Application
{
public:
	Application();
	Application(int test) {}
	~Application();
	bool runApplication();
	bool checkDisplayStartUp();
	

private:
	int runMenu();
	int displayMenu(sf::RenderWindow& window);
	int displayStartUpScreen();
	void displayClosingScreen();

	//Tetris mGame1;
};