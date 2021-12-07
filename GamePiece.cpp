#include "GamePiece.h"

//vector<Vector2i> GamePiece::getPieceType() {
//	//generate random number between 1 and 7 for each piece type
//	//use switch to create that type?
//	//return piece type
//	srand(time(0));
//	int randomNum = (rand() % 7) + 1;
//	switch (randomNum) {
//	case 1:
//		//i-shape
//		this->currentPieceType = ipiece.createIPiece();
//		break;
//	case 2:
//		//o-shape
//		break;
//	case 3:
//		//L-shape
//		break;
//	case 4:
//		//J-shape
//		break;
//	case 5:
//		//s-shape
//		break;
//	case 6:
//		//z-shape
//		break;
//	case 7:
//		//T-shape
//		break;
//	}
//}

void GamePiece::drawPiece(sf::RenderWindow& window) {
	//this->currentPieceType = getPieceType(); 


	sf::RectangleShape cell(sf::Vector2f(50.f, 50.f));
	cell.setPosition(100, 100);
	cell.setFillColor(sf::Color::Red);
	cell.setOutlineThickness(5);
	cell.setOutlineColor(sf::Color::Green);

	for (Vector2i block : currentPieceType)
	{
		cell.setPosition(block.x * 50, block.y * 50);

		window.draw(cell);
	}
}
