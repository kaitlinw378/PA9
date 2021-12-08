#include "GamePiece.h"

int GamePiece::generateChoice() {
	//srand(time(0));

	//int randomNum = (rand() % 7) + 1;
	int randomNum = 1;
	return randomNum;
}

void GamePiece::getPieceType(int randomNum) {
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

vector<Vector2i> GamePiece::getShape() {
	return this->currentPieceType;
}
//
//void GamePiece::setShape(sf::RectangleShape& sh) {
//	this->gamePiece = sh;
//}


	//Rectangle cell(sf::Vector2f(50.f, 50.f), sf::Color::Red, sf::Vector2f(100, 62.5), sf::Color::Green, 0.5);
	//cell.setPosition(window.getSize().x / 2.0f, window.getSize().y / 2.0f);
	//cell.setFillColor(sf::Color::Red);
	//cell.setOutlineColor(sf::Color::Green);

void GamePiece::timeDelay() {
	int t = 0;
	while (t < 10000) {
		t++;
	}
}

void GamePiece::drawPiece() {
	this->pieceDrop = generateChoice();
	getPieceType(pieceDrop);
	
	//for (Vector2i block : currentPieceType) {
	//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
	//		cube.move(0, 25);
	//		//int x = cube.getPosition().x;
	//		//int y = cube.getPosition().y;
	//		//y += 25;
	//		cube.setPosition((block.x * 25) + 175, (block.y * 25) + 25);
	//		window.draw(cube);
	//	}
	//}
	//timeDelay();

	//for (Vector2i bl : currentPieceType) {
	//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
	//		bl.y += 25;
	//		cube.move(0, 25);
	//		cube.setPosition((bl.x * 25) + 175, bl.y);
	//	}
	//	//timeDelay();
	//	window.draw(cube);
	//}
}

void GamePiece::controlPiece(sf::RenderWindow &window) {
	//sf::RectangleShape curr = drawPiece(window);
	drawPiece();
	sf::RectangleShape cube(sf::Vector2f(25.f, 25.f));
	cube.setFillColor(sf::Color::Red);
	//cube.setOutlineColor(sf::Color::Green);

	//cell.setOutlineThickness(5);

	for (Vector2i block : currentPieceType)
	{
		cube.setPosition((block.x * 25) + 175, block.y * 25);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
			//block.y += 1;
			cube.move(0, 25);
			//timeDelay();
			
		}
		//controlPiece(window);
		//cube.setPosition((block.x * 25) + 175, block.y * 25);
		/*while (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
			cube.move(0, 25);
		}*/
		//cube.move(0, 25);
		window.draw(cube);
		
	}
	//window.draw(curr);

	//for (Vector2i block : currentPieceType)
	//{
	//	//.setPosition((block.x * 25) + 175, block.y * 25);

	//	block.y -= 25;
	//	

	//	//window.draw(cube);
	//}
	//for (Vector2i block : currentPieceType)
	//{


	//	//curr.setPosition((block.x * 25) + 175, block.y * 25);
	//	curr.move(0, 25);
	//	//window.draw(curr);
	//}
	

	//for (Vector2i block : currentPieceType) {
	//	
	//}

	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
	//	//currentPieceType.move(0, 0.01);
	//	
	//}
}


//void GamePiece::movePiece(sf::RenderWindow& window, const sf::Vector2f& newSize,
//	const sf::Color& newColor, const sf::Vector2f& newPosition, sf::Color& newOutlineColor, float& newOutlineThickness)
//{
//	Rectangle testRectangle(newSize, newColor, newPosition, newOutlineColor, newOutlineThickness);
//	testRectangle.move(0, 0.01);
//
//}

