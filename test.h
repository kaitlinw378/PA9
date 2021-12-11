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
*		File Description: This file stores the the class definition for 
*						  Test. This class runs the test functions for the
*						  entire project.
*
***************************************************************************/
#pragma once

#include "Piece.h"
#include "Blocks.h"
#include "Application.h"
#include "Tetris.h"
#include "Rectangle.h"


class test
{
public:
		//test();
		//~test();

	void testApplicationLoadingPercentage();
	void testApplicationDisplayMenu();
	void testTetrisDisplayMenu();
	void testScoreDisplay();
	void testCalculateScore();
	void testCheckPositions();

private:
};
