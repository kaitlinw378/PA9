#include "test.h"

void test::testApplicationLoadingPercentage()
{
	Application run;
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
	Application run;
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