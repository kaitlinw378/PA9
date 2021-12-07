#include "tpiece.h"

vector<Vector2i> Tpiece::createTPiece() {
	pieceVect.push_back(sf::Vector2i{ 1,0 });
	pieceVect.push_back(sf::Vector2i{ 2,0 });
	pieceVect.push_back(sf::Vector2i{ 3,0 });
	pieceVect.push_back(sf::Vector2i{ 2,1 });
	return pieceVect;
}
