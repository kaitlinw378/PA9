#include "opiece.h"

vector<Vector2i> Opiece::createOPiece() {
	s1.push_back(sf::Vector2i{ 1,0 });
	s1.push_back(sf::Vector2i{ 2,0});
	s1.push_back(sf::Vector2i{ 1,1 });
	s1.push_back(sf::Vector2i{ 2,1 });
	return s1;
}
