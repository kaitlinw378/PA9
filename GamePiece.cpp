#include "GamePiece.h"

void GamePiece::getPieceType() {
	//generate random number between 1 and 7 for each piece type
	//use switch to create that type?
	//return piece type
	
	//currentPieceType = ipiece.createIPiece();
	//currentPieceType = opiece.createOPiece();
	//currentPieceType = lpiece.createLPiece();
	//currentPieceType = jpiece.createJPiece();
	
	//currentPieceType = spiece.createSPiece();
	//currentPieceType = zpiece.createZPiece();
	currentPieceType = tpiece.createTPiece();

	//srand(time(0));
	//int randomNum = (rand() % 7) + 1;
	//switch (randomNum) {
	//case 1:
	//	//i-shape
	//	this->currentPieceType = ipiece.createIPiece();
	//	break;
	//case 2:
	//	//o-shape
	//	break;
	//case 3:
	//	//L-shape
	//	break;
	//case 4:
	//	//J-shape
	//	break;
	//case 5:
	//	//s-shape
	//	break;
	//case 6:
	//	//z-shape
	//	break;
	//case 7:
	//	//T-shape
	//	break;
	//}
}

void GamePiece::drawPiece(sf::RenderWindow& window) {
	getPieceType();


	sf::RectangleShape cell(sf::Vector2f(50.f, 50.f));
	cell.setPosition(window.getSize().x / 2.0f, window.getSize().y / 2.0f);
	cell.setFillColor(sf::Color::Red);
	cell.setOutlineColor(sf::Color::Green);
	//cell.setOutlineThickness(5);
	for (Vector2i block : currentPieceType)
	{
		cell.setPosition(block.x * 50, block.y * 50);

		window.draw(cell);
	}
}
