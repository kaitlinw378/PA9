#include "lpiece.h"

vector<Vector2i> Lpiece::createLPiece() {
	pieceVect.push_back(sf::Vector2i{ 1,0 });
	pieceVect.push_back(sf::Vector2i{ 1,1 });
	pieceVect.push_back(sf::Vector2i{ 1,2 });
	pieceVect.push_back(sf::Vector2i{ 2,2 });
	
	
	return pieceVect;
}
