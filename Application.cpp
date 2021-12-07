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
    Tetris game1;

    do {
        displayMenu();
        //Make option decided by mouse click
        option = 0;
        cin >> option;
        switch (option)
        {
        case 1: //Run tetris
            game1.runTetris();
            break;
        case 2: //Run other games
            system("pause");
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
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Retro Runner");
   
    //sf::Vector2f size(window.getSize().x / 1.5f, window.getSize().y / 20.f);
    sf::Vector2f size(150, 150);
    sf::Vector2f pos(50, 50);
    sf::RectangleShape background(sf::Vector2f(900.f, 900.f));
    background.setFillColor(sf::Color(50, 50, 50));
    background.setPosition(pos);

    Tab bar(sf::Vector2f(size), sf::Color::Black, sf::Vector2f(150, 300));
    Tab bar1(sf::Vector2f(size), sf::Color::Black, sf::Vector2f(425, 300));
    Tab bar2(sf::Vector2f(size), sf::Color::Black, sf::Vector2f(700, 300));

    Tab bar3(sf::Vector2f(size), sf::Color::Black, sf::Vector2f(150, 600));
    Tab bar4(sf::Vector2f(size), sf::Color::Black, sf::Vector2f(425, 600));
    Tab bar5(sf::Vector2f(size), sf::Color::Black, sf::Vector2f(700, 600));

    sf::Text text;
    sf::Font font;
    std::string message = "Retro Runner";

    font.loadFromFile("Teko.ttf");


    text.setFont(font);

    text.setString(message);

    text.setCharacterSize(75);

    text.setFillColor(sf::Color::Cyan);

    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.width / 2, textRect.height / 2);
    text.setPosition(sf::Vector2f(window.getSize().x / 2.f, window.getSize().y / 11.f));

    text.setStyle(sf::Text::Bold);

    //testing gamepiece
    //GamePiece piece;
    
    //piece.createPiece();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.draw(background);


        window.draw(bar);
        window.draw(bar1);
        window.draw(bar2);
        window.draw(bar3);
        window.draw(bar4);
        window.draw(bar5);
        window.draw(text);


        window.display();

        

    }
    for (int i = 0; i < 100; i+=5)
    {
        cout << endl << endl << endl << endl << endl << endl << endl <<
            endl << endl << endl << endl << endl;
        //cout << "                                                Starting Application...\n";
        ////Insert Progress Bar here
        //cout << "                                                     Loading...";
        //cout << i << "%";
        //Sleep(50);
        //system("cls");
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

//Vector2i Application::getMouseClick()
//{
//    Window window;
//    Mouse cursor;
//
//    while (!cursor.isButtonPressed(cursor.Left));
//
//    Vector2i localPosition = cursor.getPosition(window);
//
//    return localPosition;
//}