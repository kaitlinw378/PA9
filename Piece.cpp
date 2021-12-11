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



void Piece::moveDown(sf::RenderWindow& window, Rectangle& rect) {
	bool success = false;
	//87.5
	//587.5
	//y_pos += 25;
	//updateCoords(y_pos);
	timeDelay(timeLoop);
	if (!blocks[3].getGlobalBounds().intersects(rect.getGlobalBounds()) && timeLoop == false) {

		pieceFall(rotateRight, window);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
			rotatePieceRight(rotateRight);
			//moveDown(window, rect);

			/*for (int i = 0; i < 4; i++) {
				window.draw(blocks[i]);
			}*/
			//rotateRight = 1;
		}

		//for (int i = 0; i < 4; i++) {
		//	//updateCoords(blocks[i]);
		//	//blocks[i].move(0, 0.1);
		//	window.draw(blocks[i]);
		//}



		success = true;

	}
	draw(window);
	timeLoop = true;
	//return success;
}

void Piece::pieceFall(int& r, sf::RenderWindow& window) {
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

Vector2f Piece::getLowestXCord() {
	Vector2f lowcord;
	int lowestx = getXpos(blocks[0]);
	int lowesty = getYpos(blocks[0]);
	lowcord.x = lowestx;
	lowcord.y = lowesty;
	int tempx = 0;
	int tempy = 0;
	for (int i = 0; i < 4; i++) {
		tempy = getYpos(blocks[i]);
		if (tempy < lowesty) {
			lowcord.y = tempy;
			tempx = getXpos(blocks[i]);
			lowcord.x = tempx;
			//lowest = temp;
		}
	}
	return lowcord;
}

void Piece::rotatePieceRight(int& r) {
	Vector2f lowestCords = getLowestXCord();

	int tempXCord = lowestCords.x;
	int tempYcord = lowestCords.y;
	setXpos(tempXCord);
	setYpos(tempYcord);


	blocks[3].setPosition(Vector2f((tempXCord), tempYcord));
	blocks[2].setPosition(Vector2f((tempXCord + 25), tempYcord));
	blocks[1].setPosition(Vector2f((tempXCord + 50), tempYcord));
	blocks[0].setPosition(Vector2f((tempXCord + 75), tempYcord));

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
