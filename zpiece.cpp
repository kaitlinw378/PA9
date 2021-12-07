#include "zpiece.h"

vector<Vector2i> Zpiece::createZPiece() {
	pieceVect.push_back(sf::Vector2i{ 1,0 });
	pieceVect.push_back(sf::Vector2i{ 2,0 });
	pieceVect.push_back(sf::Vector2i{ 2,1 });
	pieceVect.push_back(sf::Vector2i{ 3,1 });
	return pieceVect;
}
