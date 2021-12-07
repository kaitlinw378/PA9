#include "jpiece.h"

vector<Vector2i> Jpiece::createJPiece() {
	pieceVect.push_back(sf::Vector2i{ 2,0 });
	pieceVect.push_back(sf::Vector2i{ 2,1 });
	pieceVect.push_back(sf::Vector2i{ 2,2 });
	pieceVect.push_back(sf::Vector2i{ 1,2 });

	return pieceVect;
}
