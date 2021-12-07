#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Lpiece {
public:
	vector<Vector2i> createLPiece();
private:
	vector<Vector2i> pieceVect;
	
};
