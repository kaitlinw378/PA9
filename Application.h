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
	void runApplication();

private:
	void runMenu();
	void displayMenu();
	void displayStartUpScreen();
	void displayClosingScreen();
	//Vector2i getMouseClick();

	//Tetris mGame1;
};