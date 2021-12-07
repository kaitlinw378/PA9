#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Jpiece {
public:
	vector<Vector2i> createJPiece();
private:
	vector<Vector2i> pieceVect;
};
