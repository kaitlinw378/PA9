#include "Piece.h"

Piece::Piece() {
	blocks[0].setSize(Vector2f(25, 25));
	blocks[0].setFillColor(sf::Color::Red);
	blocks[0].setPosition(Vector2f(x_pos, y_pos + 50));

	blocks[1].setSize(Vector2f(25, 25));
	blocks[1].setFillColor(sf::Color::Red);
	blocks[1].setPosition(Vector2f(x_pos, (y_pos + 25)));

	blocks[2].setSize(Vector2f(25, 25));
	blocks[2].setFillColor(sf::Color::Red);
	blocks[2].setPosition(Vector2f(x_pos + 25, (y_pos + 25)));

	blocks[3].setSize(Vector2f(25, 25));
	blocks[3].setFillColor(sf::Color::Red);
	blocks[3].setPosition(Vector2f(x_pos + 25, (y_pos + 50)));
}

Piece::Piece(int& num) {
	if (num == 1) {
		blocks[0].setSize(Vector2f(25, 25));
		blocks[0].setFillColor(sf::Color::Red);
		blocks[0].setPosition(Vector2f(x_pos, y_pos + 50));

		blocks[1].setSize(Vector2f(25, 25));
		blocks[1].setFillColor(sf::Color::Red);
		blocks[1].setPosition(Vector2f(x_pos, (y_pos + 25)));

		blocks[2].setSize(Vector2f(25, 25));
		blocks[2].setFillColor(sf::Color::Red);
		blocks[2].setPosition(Vector2f(x_pos + 25, (y_pos + 25)));

		blocks[3].setSize(Vector2f(25, 25));
		blocks[3].setFillColor(sf::Color::Red);
		blocks[3].setPosition(Vector2f(x_pos + 25, (y_pos + 50)));
	}
	if (num == 2) {
		blocks[0].setSize(Vector2f(25, 25));
		blocks[0].setFillColor(sf::Color::Red);
		blocks[0].setPosition(Vector2f(x_pos, y_pos + 50));

		blocks[1].setSize(Vector2f(25, 25));
		blocks[1].setFillColor(sf::Color::Red);
		blocks[1].setPosition(Vector2f(x_pos, (y_pos + 25)));

		blocks[2].setSize(Vector2f(25, 25));
		blocks[2].setFillColor(sf::Color::Red);
		blocks[2].setPosition(Vector2f(x_pos + 25, (y_pos + 25)));

		blocks[3].setSize(Vector2f(25, 25));
		blocks[3].setFillColor(sf::Color::Red);
		blocks[3].setPosition(Vector2f(x_pos + 25, (y_pos + 50)));
	}

}

void Piece::draw(sf::RenderWindow& window) {
	for (int i = 0; i < 4; i++) {
		window.draw(blocks[i]);
	}
}

void Piece::timeDelay(bool& t) {
	if (t == true) {
		int i = 0;
		while (i <= 200000000) {
			i++;
		}
		t = false;
		resetTimeLoop(t);
	}
}

void Piece::resetTimeLoop(bool& t) {
	timeLoop = t;
}

sf::FloatRect Piece::getBounds() {
	return blocks->getLocalBounds();
}


bool Piece::moveDown(sf::RenderWindow& window, Rectangle& rect, Rectangle& left, Rectangle& right, bool& collision) {

	bool success = false;
	timeDelay(timeLoop);
	if (!blocks->getGlobalBounds().intersects(rect.getGlobalBounds()) &&
		!blocks->getGlobalBounds().intersects(left.getGlobalBounds()) &&
		!blocks->getGlobalBounds().intersects(right.getGlobalBounds()) && timeLoop == false && collision == false) {

		pieceFall(window);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
			window.setKeyRepeatEnabled(false);
			rotateRight += 1;
			if (rotateRight == 1) {
				rotatePieceRight();
			}
			else if (rotateRight == 2) {
				rotatePieceDown();
			}
			else if (rotateRight == 3) {
				rotatePieceLeft();
			}
			else if (rotateRight == 4) {
				rotatePieceUp();
			}
			else {
				rotateRight = 0;
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			window.setKeyRepeatEnabled(false);
			moveRight();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
			window.setKeyRepeatEnabled(false);
			moveLeft();
		}
		draw(window);
	}
	if (blocks->getGlobalBounds().intersects(rect.getGlobalBounds())) {
		success = true;
	}

	timeLoop = true;
	return success;
}

void Piece::pieceFall(sf::RenderWindow& window) {
	int tempYcord = 0;
	int tempXcord = 0;
	for (int i = 0; i < 4; i++) {
		tempYcord = getYpos(blocks[i]);
		tempYcord += 25;
		tempXcord = getXpos(blocks[i]);
		blocks[i].setPosition(Vector2f(tempXcord, tempYcord));
	}
}

void Piece::moveRight() {
	int tempYcord = 0;
	int tempXcord = 0;

	for (int i = 0; i < 4; i++) {
		tempYcord = getYpos(blocks[i]);
		tempXcord = getXpos(blocks[i]);
		tempXcord += 25;
		setXpos(tempXcord);
		setYpos(tempYcord);
		blocks[i].setPosition(Vector2f(tempXcord, tempYcord));
	}
}

void Piece::moveLeft() {
	int tempYcord = 0;
	int tempXcord = 0;

	for (int i = 0; i < 4; i++) {
		tempYcord = getYpos(blocks[i]);
		tempXcord = getXpos(blocks[i]);
		tempXcord -= 25;
		setXpos(tempXcord);
		setYpos(tempYcord);
		blocks[i].setPosition(Vector2f(tempXcord, tempYcord));
	}
}

void Piece::rotatePieceRight() {
	int tempXCord = getXpos(blocks[3]);
	int tempYcord = getYpos(blocks[3]);
	setXpos(tempXCord);
	setYpos(tempYcord);
	blocks[0].setPosition(Vector2f((tempXCord), tempYcord));
	blocks[1].setPosition(Vector2f((tempXCord + 25), tempYcord));
	blocks[2].setPosition(Vector2f((tempXCord + 50), tempYcord));
	blocks[3].setPosition(Vector2f((tempXCord + 75), tempYcord));
}

void Piece::rotatePieceDown() {
	int tempXCord = getXpos(blocks[0]);
	int tempYcord = getYpos(blocks[0]);
	setXpos(tempXCord);
	setYpos(tempYcord);
	blocks[0].setPosition(Vector2f((tempXCord), tempYcord));
	blocks[1].setPosition(Vector2f((tempXCord), tempYcord - 25));
	blocks[2].setPosition(Vector2f((tempXCord), tempYcord - 50));
	blocks[3].setPosition(Vector2f((tempXCord), tempYcord - 75));
}

void Piece::rotatePieceLeft() {
	int tempXCord = getXpos(blocks[3]);
	int tempYcord = getYpos(blocks[3]);
	setXpos(tempXCord);
	setYpos(tempYcord);
	blocks[0].setPosition(Vector2f((tempXCord - 75), tempYcord));
	blocks[1].setPosition(Vector2f((tempXCord - 50), tempYcord));
	blocks[2].setPosition(Vector2f((tempXCord - 25), tempYcord));
	blocks[3].setPosition(Vector2f((tempXCord), tempYcord));
}

void Piece::rotatePieceUp() {
	int tempXCord = getXpos(blocks[3]);
	int tempYcord = getYpos(blocks[3]);
	setXpos(tempXCord);
	setYpos(tempYcord);
	blocks[0].setPosition(Vector2f((tempXCord), tempYcord + 75));
	blocks[1].setPosition(Vector2f((tempXCord), tempYcord + 50));
	blocks[2].setPosition(Vector2f((tempXCord), tempYcord + 25));
	blocks[3].setPosition(Vector2f((tempXCord), tempYcord));
}

bool Piece::colisionCheck(vector<Piece>& vec) {
	bool collide = false;
	for (Piece it : vec) {
		if (it.getBounds().intersects(it.getBounds())) {
			collide = true;
			break;
		}
	}
	return collide;


	/*collisionResult = colisionCheck(piece);
	moveResult = piece.moveDown(window, bottom, left, right, collisionResult);
	if (collisionResult == false && moveResult == false) {
		piece.moveDown(window, bottom, left, right, collisionResult);
	}
	else if (collisionResult == false && moveResult == true) {
		piece = piece2;

	}*/
}


int Piece::getXpos(Blocks& block) {
	int xtemp = block.getPosition().x;
	return xtemp;
}

int Piece::getYpos(Blocks& block) {
	int ytemp = block.getPosition().y;
	return ytemp;
}

void Piece::setXpos(int& xpos) {
	x_pos = xpos;
}

void Piece::setYpos(int& ypos) {
	y_pos = ypos;
}
