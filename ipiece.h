#pragma once

#include <SFML/Graphics.hpp>

#include <vector>
using sf::Vector2i;
using std::vector;

class Ipiece {
public:
	vector<Vector2i> createIPiece();

private:
	vector<Vector2i> s1;
};
