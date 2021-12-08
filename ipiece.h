#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Ipiece {
public:
	vector<Vector2i> createIPiece(int& x, int &y);
private:
	vector<Vector2i> s1;
	int x = 1;
	int y = 0;
};
