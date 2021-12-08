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
    sf::Vector2i mousePos;
    option = 0;
    
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Retro Runner");

        displayMenu(window);
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            while (!sf::Mouse::isButtonPressed(sf::Mouse::Left));

            mousePos = sf::Mouse::getPosition(window);

            if ((mousePos.x > 150 && mousePos.x < 300) && (mousePos.y > 300 && mousePos.y < 450))
            {
                option = 1;
                window.close();
            }
        }
 
        switch (option)
        {
        case 1: 
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
}

void Application::displayMenu(sf::RenderWindow& window)
{
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

    sf::Text textTitle;
    sf::Text textTetris;
    sf::Font font;

    font.loadFromFile("Teko.ttf");

    //Title Text
    textTitle.setFont(font);
    textTitle.setString("Retro Runner");
    textTitle.setCharacterSize(75);
    textTitle.setFillColor(sf::Color::Cyan);

    //Tetris Text
    textTetris.setFont(font);
    textTetris.setString("Tetris");
    textTetris.setCharacterSize(50);
    textTetris.setFillColor(sf::Color::Cyan);
    textTitle.setStyle(sf::Text::Bold);

    sf::FloatRect textRect = textTitle.getLocalBounds();
    textTitle.setOrigin(textRect.width / 2, textRect.height / 2);
    textTitle.setPosition(sf::Vector2f(window.getSize().x / 2.f, window.getSize().y / 11.f));


    textTetris.setOrigin(textRect.width / 2, textRect.height / 2);
    textTetris.setPosition(sf::Vector2f(320, 475));


    window.draw(background);


    window.draw(bar);
    window.draw(bar1);
    window.draw(bar2);
    window.draw(bar3);
    window.draw(bar4);
    window.draw(bar5);
    window.draw(textTitle);
    window.draw(textTetris);


     window.display();

}

void Application::displayStartUpScreen()
{
    for (int i = 0; i < 100; i+=5)
    {
        cout << endl << endl << endl << endl << endl << endl << endl <<
            endl << endl << endl << endl << endl;
        cout << "                                                Starting Application...\n";
        cout << "                                                     Loading...";
        cout << i << "%";
        Sleep(10);
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
