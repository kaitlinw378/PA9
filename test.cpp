/***************************************************************************
* Programmer: Grant Erickson, Spenceer, Caleb Peterson, Kaitlin White
* Class : CptS 122;
*Programming Assignment : Programming assignment 9
* Date : 12 / 1 / 2021
*
*Program Description : This program runs a retro game application.
* The retro game application stores multiple
* different games.As of now tetris is the
* only game available.
*
*File Description : This file stores the the function definitions for
* Test.This class runs the test functions for the
* entire project.
*
***************************************************************************/

#include "test.h"

void test::testApplicationLoadingPercentage()
{
	int test = 0;
	Application run(test);
	bool startup = run.checkDisplayStartUp();
	if (startup == true) 
	{
		cout << "The result matched expected result" << endl;
	}
	else
	{
		cout << "!!!!!!!Test Failed!!!!!!" << endl;
	}
	system("pause");
}

void test::testApplicationDisplayMenu()
{
	int test = 0;
	Application run(test);
	if (run.runApplication() == true)
	{
		cout << "The result matched expected result" << endl;
	}
	else
	{
		cout << "!!!!!!!Test Failed!!!!!!" << endl;
	}
	system("pause");
}

void test::testTetrisDisplayMenu()
{
	Tetris run;
	if (run.runTetris() == true)
	{
		cout << "The result matched expected result" << endl;
	}
	else
	{
		cout << "!!!!!!!Test Failed!!!!!!" << endl;
	}
	system("pause");
}

void test::testScoreDisplay()
{
	Tetris run;
	if (run.display() == true)
	{
		cout << "The result matched expected result" << endl;
	}
	else
	{
		cout << "!!!!!!!Test Failed!!!!!!" << endl;
	}
	system("pause");
}

void test::testCalculateScore()
{
	Tetris run;
	int score1 = 50, score2 = 0, level = 2, numCleared = 3;
	run.getScore(score1, level, numCleared);
	score2 = 50 + 400 + (400 * level);
	if (score1 == score2)
	{
		cout << "The result matched expected result" << endl;
	}
	else
	{
		cout << "!!!!!!!Test Failed!!!!!!" << endl;
	}
	system("pause");
}

void test::testCheckPositions() {
	int num = 2;
	Piece piece(num);

	Vector2f vec(250, 25), res;
	piece.setBlocksPosition(num, vec);

	res = piece.getBlocksPosition(num);
	if (res.x == vec.x && res.y == vec.y) {
		cout << "test pass" << endl;
	}
	else {
		cout << "fail pass" << endl;
	}

}