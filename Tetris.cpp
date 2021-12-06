#include "Tetris.h"

Tetris::Tetris()
{
	//displayStartUpScreen();
}

Tetris::~Tetris()
{
	displayClosingScreen();
}

void Tetris::runTetris()
{
	runMenu();
}

void Tetris::runMenu()
{
    displayStartUpScreen();
    int option;

    do {
        displayMenu();
        //Make option decided by mouse click
        option = 0;
        cin >> option;
        switch (option)
        {
        case 1: //Play
            play();
            break;
        case 2: //Game Rules
            break;
        case 3: //Highscores
            break;
        case 4: //Exit Tetris
            break;
        default: //Invalid Input
            system("cls");
            runMenu();
            break;
        }
        system("cls");
    } while (option != 4);
}

void Tetris::displayMenu()
{

}

void Tetris::displayStartUpScreen()
{
    cout << "Tetris" << endl;
}

void Tetris::displayClosingScreen()
{

}

void Tetris::play()
{
    //Plays the game of tetris
}

void Tetris::displayGameRules()
{
    //Displays game rules
}

void Tetris::viewScores()
{
    //View highscores

    //open highscores file
    //read in scores
    //display scores
}