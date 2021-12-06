#pragma once

#include "Tetris.h"
#include <Windows.h>

class Application
{
public:
	Application();
	~Application();
	void runApplication();

private:
	void runMenu();
	void displayMenu();
	void displayStartUpScreen();
	void displayClosingScreen();
	//vector2i getMouseClick();

	Tetris mGame1;
};
