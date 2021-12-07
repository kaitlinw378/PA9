#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Zpiece {
public:
	vector<Vector2i> createZPiece();
private:
	vector<Vector2i> pieceVect;
};
