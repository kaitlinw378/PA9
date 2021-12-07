#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
using sf::Vector2i;
using std::vector;
/*
struct Ipiece {

	Vector2i s1[4];

};
*/

class Ipiece {
public:


private:
	Ipiece();

};

class GamePiece{
public:
	vector<Vector2i> createPiece();
	void displayPiece(sf::RenderWindow &window);
	
private:
	

	vector<Vector2i> s1;
	//Ipiece i;
};
