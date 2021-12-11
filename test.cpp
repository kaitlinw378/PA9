#include "test.h"

void test::testApplicationLoadingPercentage()
{
	Application run;
	if (run.checkDisplayStartUp() == true) 
	{
		cout << "The result matched expected result" << endl;
	}
}

void test::testApplicationDisplayMenu()
{
	Application run;
	if (run.runApplication() == true)
	{
		cout << "The result matched expected result" << endl;
	}
	
}

void test::testTetrisDisplayMenu()
{
	Tetris run;
	if (run.runTetris() == true)
	{
		cout << "The result matched expected result" << endl;
	}
}

void test::testScoreFunction()
{
	
	
}

void test::testsomethin()
{

	
}