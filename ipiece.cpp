#include "ipiece.h"

vector<Vector2i> Ipiece::createIPiece(int& x, int& y) {
	s1.push_back(sf::Vector2i{ x,y });
	s1.push_back(sf::Vector2i{ x,(y+1) });
	s1.push_back(sf::Vector2i{ x, (y+2)});
	s1.push_back(sf::Vector2i{ x, (y+3) });
	return s1;
}
