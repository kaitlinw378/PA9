#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

class Application
{
public:
	Application();
	void runApplication();

private:
	void runApplicationHelper();
	void runMenu();


};
