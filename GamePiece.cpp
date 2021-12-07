#include "GamePiece.h"

vector<Vector2i> GamePiece::getPieceType() {

}

void GamePiece::drawPiece(sf::RenderWindow& window, vector<Vector2i> &pieceType) {
	sf::RectangleShape cell(sf::Vector2f(50, 50));
	cell.setPosition(100, 100);
	cell.setFillColor(sf::Color::Red);
	cell.setOutlineThickness(5);
	cell.setOutlineColor(sf::Color::Green);

	for (Vector2i block : pieceType)
	{
		cell.setPosition(block.x * 50, block.y * 50);

		window.draw(cell);
	}
}
