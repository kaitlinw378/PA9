#include "GamePiece.h"

GamePiece GamePiece::createPiece() {
	GamePiece piece;
	piece.s1[0] = sf::Vector2i{ 1,0 };
	piece.s1[1] = sf::Vector2i{ 1,1 };
	piece.s1[2] = sf::Vector2i{ 1,2 };
	piece.s1[3] = sf::Vector2i{ 1,3 };
	return piece;
}

void GamePiece::displayPiece() {
	//const GamePiece nP = createPiece();
	//sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	//window.draw(nP);
}