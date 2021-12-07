#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Tpiece {
public:
	vector<Vector2i> createTPiece();
private:
	vector<Vector2i> pieceVect;
};
