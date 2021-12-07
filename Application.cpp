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
    sf::RenderWindow window(sf::VideoMode(500, 500), "Retro Run");
   
    sf::Vector2f size(window.getSize().x / 2.78, window.getSize().y / 20);
    sf::RectangleShape background(sf::Vector2f(625.f, 625.f));
    sf::RectangleShape shape(sf::Vector2f(500.f, 1000.f));
    background.setFillColor(sf::Color(50, 50, 50));
    shape.setPosition(200.f, 175.f);
    shape.setFillColor(sf::Color::Black);
    shape.setOutlineThickness(5.f);
    shape.setOutlineColor(sf::Color::Cyan);

    sf::RectangleShape shape2(sf::Vector2f(400.f, 675.f));
    shape2.setPosition(775.f, 500.f);
    shape2.setFillColor(sf::Color::Black);

 

    Tab bar(sf::Vector2f(size), sf::Color::Magenta, sf::Vector2f(150, 100));

    
    sf::Text text;
    sf::Font font;
    std::string message = "Tetris";

    font.loadFromFile("Teko.ttf");


    text.setFont(font);

    text.setString(message);

    text.setCharacterSize(50);

    text.setFillColor(sf::Color::Cyan);

    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.width / 2, textRect.height / 2);
    text.setPosition(sf::Vector2f(window.getSize().x / 3.75f, window.getSize().y / 11.5f));

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
        window.draw(shape);
        window.draw(shape2);


        window.draw(bar);
       
        window.draw(text);


        window.display();

        

    }
    for (int i = 0; i < 100; ++i)
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