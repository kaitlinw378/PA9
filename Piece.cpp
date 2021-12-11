#include "Piece.h"

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

void Piece::timeDelay(bool& t) {
	if (t == true) {
		int i = 0;
		while (i <= 300000000) {
			i++;
		}
		t = false;
		resetTimeLoop(t);
	}
}

void Piece::resetTimeLoop(bool& t) {
	timeLoop = t;
}

void Piece::moveDown(sf::RenderWindow& window, Rectangle& rect) {
	bool success = false;
	/*Blocks temp;
	temp.setPosition(boundsCord);
	temp.setSize(Vector2f(25, 25));*/
	//87.5
	//587.5

	timeDelay(timeLoop);
	if (!blocks[3].getGlobalBounds().intersects(rect.getGlobalBounds()) && timeLoop == false) {

		pieceFall(window);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
			rotateRight += 1;
			if (rotateRight > 4) {
				rotateRight = 0;
			}

			rotatePieceRight(rotateRight);
		}
		window.setKeyRepeatEnabled(false);

		/*rotateRight += 1;
		if (rotateRight > 4) {
			rotateRight = 0;
		}

		rotatePieceRight(rotateRight);
		rotateRight += 1;
		rotatePieceRight(rotateRight);
		rotateRight += 1;
		rotatePieceRight(rotateRight);
		rotateRight += 1;
		rotatePieceRight(rotateRight);
		rotateRight += 1;
		rotatePieceRight(rotateRight);
		rotateRight += 1;*/

		draw(window);
		success = true;
	}
	timeLoop = true;
	//return success;
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

void Piece::updateCoords(Blocks& block) {
	int tempYcord = getYpos(block);
	tempYcord += 25;
	int tempXcord = getXpos(block);
	block.setPosition(Vector2f(tempXcord, tempYcord));
}

Vector2f Piece::getLowestCord(int& r) {
	Vector2f lowcord;
	if (r == 1 || r == 3) {
		int lowestx = getXpos(blocks[3]);
		int lowesty = getYpos(blocks[3]);
		int tempx = 0;
		int tempy = 0;
		for (int i = 0; i < 4; i++) {
			tempy = getYpos(blocks[i]);
			tempx = getXpos(blocks[i]);
			if (tempy < lowesty) {
				lowcord.y = tempy;
				lowcord.x = tempx;
			}
		}
	}
	if (r == 2) {
		lowcord.x = getXpos(blocks[1]);
		lowcord.y = getYpos(blocks[0]);
	}
	if (r == 4) {
		int greatestx = getXpos(blocks[0]);
		int greatesty = getYpos(blocks[0]);
		int tempx = 0;
		int tempy = 0;
		for (int i = 0; i < 4; i++) {
			tempy = getYpos(blocks[i]);
			tempx = getXpos(blocks[i]);
			if (tempx > greatestx) {

				greatesty = tempy;
				greatestx = tempx;
			}
		}
		lowcord.x = greatestx;
		lowcord.y = greatesty;

	}
	return lowcord;
}

void Piece::rotatePieceRight(int& r) {
	Vector2f lowestCords = getLowestCord(r);
	if (r == 1) {
		/*int tempXCord = lowestCords.x;
		int tempYcord = lowestCords.y;
		for (int i = 0; i < 4; i++) {
			blocks[i].setPosition(Vector2f(tempXCord, tempYcord));
			tempXCord += 25;*/
		}
	}
	else if (r == 2) {
		int tempXcord = lowestCords.x;
		int tempYcord = 0;
		int x = 0;
		int y = 0;
		for (int i = 0; i < 4; i++) {
			y = getYpos(blocks[i]);
			blocks[i].setPosition(Vector2f(tempXcord, (y + tempYcord)));
			tempYcord += 25;
		}
	}
	else if (r == 3) {
		int tempXCord = lowestCords.x;
		int tempYcord = lowestCords.y;
		for (int i = 0; i < 4; i++) {
			blocks[i].setPosition(Vector2f(tempXCord, tempYcord));
			tempXCord -= 25;
		}
	}
	else if (r == 4) {
		int tempXcord = lowestCords.x;
		int tempYcord = lowestCords.y;
		int x = 0;
		int y = 0;
		for (int i = 0; i < 4; i++) {
			//y = getYpos(blocks[i]);
			blocks[i].setPosition(Vector2f(tempXcord, (tempYcord)));
			tempYcord -= 25;
		}
		//r = 0;
		//r = 1;
	}
	else {
		if (r > 4) {
			r = 0;
		}
	}

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
