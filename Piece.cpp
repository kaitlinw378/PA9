#include "piece.h"


Piece::Piece() {
	blocks[0].setSize(Vector2f(25, 25));
	blocks[0].setFillColor(sf::Color::Red);
	blocks[0].setPosition(Vector2f(x_pos, y_pos));

	blocks[1].setSize(Vector2f(25, 25));
	blocks[1].setFillColor(sf::Color::Red);
	blocks[1].setPosition(Vector2f(x_pos, (y_pos + 25)));

	blocks[2].setSize(Vector2f(25, 25));
	blocks[2].setFillColor(sf::Color::Red);
	blocks[2].setPosition(Vector2f(x_pos, (y_pos + 50)));

	blocks[3].setSize(Vector2f(25, 25));
	blocks[3].setFillColor(sf::Color::Red);
	blocks[3].setPosition(Vector2f(x_pos, (y_pos + 75)));
}

void Piece::draw(sf::RenderWindow& window) {
	for (int i = 0; i < 4; i++) {
		window.draw(blocks[i]);
	}
}

void Piece::updateCoords(int y) {
	for (int i = 0; i < 4; i++) {
		blocks[i].setPosition(Vector2f(x_pos, y));
	}
}

void Piece::moveDown(sf::RenderWindow& window, Rectangle& rect) {
	//87.5
	//587.5
	//y_pos += 25;
	//updateCoords(y_pos);
	if (!blocks[3].getGlobalBounds().intersects(rect.getGlobalBounds())) {

		for (int i = 0; i < 4; i++) {
			blocks[i].move(0, 0.1);
			window.draw(blocks[i]);

		}
	}
}

//
//Piece::Piece(int pT){
//	this->pieceType = 1;
//	this->pieceV = getBlockInfo(x, y);
//}
//
//void initRec() {
//	sf::RectangleShape s1(sf::Vector2f(25.f, 25.f));
//	sf::RectangleShape s2(sf::Vector2f(25.f, 25.f));
//	sf::RectangleShape s3(sf::Vector2f(25.f, 25.f));
//	sf::RectangleShape s4(sf::Vector2f(25.f, 25.f));
//	
//
//
//}
//
//
//vector<Vector2i> Piece::updateYCords() {
//	vector<Vector2i> tempVec;
//	//y_pos += 1;
//	tempVec.push_back(Vector2i(x_pos, y_pos));
//	tempVec.push_back(Vector2i(x_pos, y_pos));
//	tempVec.push_back(Vector2i(x_pos, y_pos));
//	tempVec.push_back(Vector2i(x_pos, y_pos));
//	this->pieceV = tempVec;
//	return tempVec;
//
//
//	/*for (Vector2i v : vec) {
//		v.y = y_pos;
//	}*/
//}
//
//vector<Vector2i> Piece::getBlockInfo(int x_pos, int y_pos) {
//	vector<Vector2i> vec;
//
//	vec.push_back(Vector2i(x_pos, y_pos));
//	vec.push_back(Vector2i(x_pos, (y_pos + 1)));
//	vec.push_back(Vector2i(x_pos, (y_pos + 2)));
//	vec.push_back(Vector2i(x_pos, (y_pos + 3)));
//
//	return vec;
//}
//
//void Piece::pieceControl() {
//	sf::RectangleShape cell(sf::Vector2f(25.f, 25.f));
//	cell.setFillColor(sf::Color::Red);	
//	y += 1;
//	this->pieceV = updateYCords();
//	for (Vector2i& mino : pieceV) {
//		cell.setPosition((25* mino.x), (25* mino.y));
//		//cell.move(0, 25);
//	}
//}
//
//
//void Piece::drawFirst(sf::RenderWindow& window) {
//	sf::RectangleShape cell(sf::Vector2f(25.f, 25.f));
//	cell.setFillColor(sf::Color::Red);
//	for (Vector2i& mino : pieceV)
//	{
//		cell.setPosition((25 * mino.x), (25 * mino.y));
//
//		window.draw(cell);
//	}
//}
//
//bool Piece::move_down(sf::RenderWindow& window) {
//	
//	//sf::RectangleShape cube(sf::Vector2f(25.f, 25.f));
//	//cube.setFillColor(sf::Color::Red);
//	//blocks.updateYCords(pieceV);
//	//cube.setPosition((25), (0));
//	//sh.move(0, 25);
//	//window.draw(sh);
//	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
//	//	for (Vector2i& mino : pieceV)
//	//	{
//	//		//cube.setPosition((25 * mino.x), (25 * mino.y) + 25);
//	//		sh.move(0, 25);
//	//	}
//	//	//cube.move(0, 25);
//	//	window.draw(sh);
//	//}
//	/*for (Vector2i& mino : pieceV)
//	{
//		cube.setPosition((25 * mino.x), (25 * mino.y));
//		
//		window.draw(cube);
//	}*/
//	
//
//	//blocks.updateYCords(pieceV);
//	/*for (Vector2i bl : pieceV) {
//		bl.y++;
//	}*/
//	return 1;
//}
//
//int Piece::get_shape() {
//	return this->pieceType;
//}
//
////void Piece::update_matrix(std::vector<std::vector<int>>& i_matrix) {
////	for (Vector2i& bl : pieceV)
////	{
////		if (0 > bl.y)
////		{
////			continue;
////		}
////
////		i_matrix[bl.x][bl.y] = 1 + pieceType;
////	}
////}
//
//vector<Vector2i> Piece::get_minos() {
//	return this->pieceV;
//}
