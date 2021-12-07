#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Spiece {
public:
	vector<Vector2i> createSPiece();
private:
	vector<Vector2i> pieceVect;
};
