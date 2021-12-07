#include "GamePiece.h"

vector<Vector2i> GamePiece::createPiece() {
	// piece;
	s1.push_back(sf::Vector2i{ 1,0 });
	s1.push_back(sf::Vector2i{ 1,1 });
	s1.push_back(sf::Vector2i{ 1,2 });
	s1.push_back(sf::Vector2i{ 1,3 });

	/*s1[0] = sf::Vector2i{ 100,0 };
	s1[1] = sf::Vector2i{ 100,100 };
	s1[2] = sf::Vector2i{ 100,200 };*/
	//s1[3] = sf::Vector2i{ 100,300 };
	//return piece;
	//return i;
	return s1;
}

void GamePiece::displayPiece(sf::RenderWindow &window) {
	sf::RectangleShape cell(sf::Vector2f(50, 50));
	cell.setPosition(100, 100);
	cell.setFillColor(sf::Color::Red);
	cell.setOutlineThickness(5);
	cell.setOutlineColor(sf::Color::Green);
	
	for (Vector2i mino : s1)
	{
		cell.setPosition(mino.x * 50, mino.y * 50);
		
		window.draw(cell);
	}

	//sf::Sprite ipiece;
	//Ipiece i;
	//const GamePiece nP = createPiece();
	//sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");
	//window.draw(i);
}

