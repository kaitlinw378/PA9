#include "GamePiece.h"

void GamePiece::getPieceType() {
	//generate random number between 1 and 7 for each piece type
	//use switch to create that type?
	//return piece type
	// 
	//currentPieceType = ipiece.createIPiece();
	//currentPieceType = opiece.createOPiece();
	//currentPieceType = lpiece.createLPiece();
	//currentPieceType = jpiece.createJPiece();
	
	//currentPieceType = jpiece.createJPiece();
	//currentPieceType = zpiece.createZPiece();
	//currentPieceType = spiece.createSPiece();
	//currentPieceType = tpiece.createTPiece();
	srand(time(0));
	int randomNum = (rand() % 7) + 1;
	switch (randomNum) {
	case 1:
		//i-shape
		currentPieceType = ipiece.createIPiece();
		break;
	case 2:
		//o-shape
		currentPieceType = opiece.createOPiece();
		break;
	case 3:
		//L-shape
		currentPieceType = lpiece.createLPiece();
		break;
	case 4:
		currentPieceType = jpiece.createJPiece();
		//J-shape
		break;
	case 5:
		currentPieceType = spiece.createSPiece();
		//s-shape
		break;
	case 6:
		currentPieceType = zpiece.createZPiece();
		//z-shape
		break;
	case 7:
		currentPieceType = tpiece.createTPiece();
		//T-shape
		break;
	}
}


void GamePiece::drawPiece(sf::RenderWindow& window) {
	getPieceType();
	
	sf::RectangleShape cube(sf::Vector2f(25.f, 25.f));
	cube.setFillColor(sf::Color::Red);
	cube.setOutlineColor(sf::Color::Green);
	//cell.setOutlineThickness(5);
	for (Vector2i block : currentPieceType)
	{
		cube.setPosition((block.x * 25)+175, block.y * 25);

		window.draw(cube);
	}
}

void GamePiece::movePiece(sf::RenderWindow& window, const sf::Vector2f& newSize,
	const sf::Color& newColor, const sf::Vector2f& newPosition, sf::Color& newOutlineColor, float& newOutlineThickness)
{
	Rectangle testRectangle(newSize, newColor, newPosition, newOutlineColor, newOutlineThickness);
	testRectangle.move(0, 0.01);
}
