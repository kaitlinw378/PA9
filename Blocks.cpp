/***************************************************************************
* Programmer: Grant Erickson, Spenceer, Caleb Peterson, Kaitlin White
* Class: CptS 122;
* Programming Assignment: Programming assignment 9
* Date:  12/1/2021
*
*       Program Description: This program runs a retro game application.
*							 The retro game application stores multiple
*							 different games. As of now tetris is the
*						     only game available.
*
*		File Description: This file stores the the function definitions for
*						  the individual blocks for the of the peices. Each
*						  piece is made from an assortment of these blocks.
*
***************************************************************************/

#include "blocks.h"

Blocks::Blocks() {
}

//
//void Blocks::updateYCords(vector<Vector2i>& vec) {
//	y_pos += 1;
//	for (Vector2i v : vec) {
//		v.y = y_pos;
//	}
//}
//
//vector<Vector2i> Blocks::getBlockInfo(int x_pos, int y_pos) {
//	vector<Vector2i> vec;
//
//	vec.push_back(Vector2i(x_pos, y_pos));
//	vec.push_back(Vector2i(x_pos, (y_pos +1)));
//	vec.push_back(Vector2i(x_pos, (y_pos +2)));
//	vec.push_back(Vector2i(x_pos, (y_pos +3)));
//	
//	/*for (Vector2i bl : vec){
//		bl.x += x_pos;
//		bl.y += y_pos;
//	}*/
//
//	return vec;
//}

