#include "Application.h"

Application::Application()
{
    displayStartUpScreen();
}

Application::~Application()
{
    displayClosingScreen();
}

void Application::runApplication()
{
    runMenu();
}

void Application::runMenu()
{
    int option;

    do {
        displayMenu();
        //Make option decided by mouse click
        option = 0;
        cin >> option;
        switch (option)
        {
        case 1: //Run tetris
            this->mGame1.runTetris();
            break;
        case 2: //Run other games
            break;
        case 3: //Exit Application
            break;
        default: //Invalid Input
            system("cls");
            runMenu();
            break;
        }
        system("cls");
    } while (option != 3);
}

void Application::displayMenu()
{
    cout << "*Displaying Menu*" << endl << endl;
    cout << "(1) Tetris \n(3) Exit" << endl << endl;
}

void Application::displayStartUpScreen()
{
    for (int i = 0; i < 100; ++i)
    {
        cout << endl << endl << endl << endl << endl << endl << endl <<
            endl << endl << endl << endl << endl;
        cout << "                                                Starting Application...\n";
        //Insert Progress Bar here
        cout << "                                                     Loading...";
        cout << i << "%";
        Sleep(50);
        system("cls");
    }
    system("cls");
}

void Application::displayClosingScreen()
{
    cout << endl << endl << endl << endl << endl << endl << endl <<
        endl << endl << endl << endl << endl;
    cout << "                                                Closing Application...";
    //Replace with Progress bar here
    cout << endl << endl << endl << endl << endl << endl << endl <<
        endl << endl << endl << endl << endl;
    system("pause");
    system("cls");
}

//vector2i Application::getMouseClick()
//{
//    while (!isButtonPressed(sf::Mouse));
//
//    return getPosition();
//}