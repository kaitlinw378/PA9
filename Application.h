#pragma once

#include "Tetris.h"
#include <Windows.h>
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