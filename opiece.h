#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Opiece {
public:
	vector<Vector2i> createOPiece();
private:
	vector<Vector2i> s1;
};
