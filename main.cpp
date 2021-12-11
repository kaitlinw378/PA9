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
*		File Description: This stores main() for the application.
*
***************************************************************************/

#include "Application.h"
#include "ProgressBar.h"
#include "test.h"

int main() {

	Application obj;
	obj.runApplication();


	//For Testing Purposes: Please run each test case separately and comment the others out
	//test t;
	// 
	// Test 1
	//t.testApplicationLoadingPercentage();
	// Test 2
	//t.testApplicationDisplayMenu();
	// Test 3
	//t.testTetrisDisplayMenu();
	// Test 4
	//t.testScoreDisplay();
	// Test 5
	//t.testCalculateScore();


	return 0;
}
