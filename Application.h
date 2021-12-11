#pragma once

#include "Tetris.h"
#include <Windows.h>
#include "Tab.h"
#include "GamePiece.h"


class Application
{
public:
	Application();
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