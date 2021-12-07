#include "ipiece.h"

vector<Vector2i> Ipiece::createIPiece() {
	s1.push_back(sf::Vector2i{ 1,0 });
	s1.push_back(sf::Vector2i{ 1,1 });
	s1.push_back(sf::Vector2i{ 1,2 });
	s1.push_back(sf::Vector2i{ 1,3 });
	return s1;
}

