#include "Application.h"
#include "Rectangle.h"

Application::Application()
{
    displayStartUpScreen();
}

Application::~Application()
{
    displayClosingScreen();
}

bool Application::runApplication()
{
    int result = false;
    runMenu();
    if (runMenu() == 1) {
        result = true;
    }
    return result;
}

int Application::runMenu()
{
    int option;
    int result = 0;
    Tetris game1;
    sf::Vector2i mousePos;
    option = 0;
    
    do {
        option = 0;
        sf::RenderWindow window(sf::VideoMode(1000, 1000), "Retro Runner");
        displayMenu(window);
        if (displayMenu(window) == 1)
        {
            result = 1;
        }
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
                option = 3;
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
 
        default: //Invalid Input
            break;
        }
    } while (option != 3);
    return result;
}

int Application::displayMenu(sf::RenderWindow& window)
{
    int result = 0;
    sf::Color backGroundColor(50, 50, 50);

    Tab background(sf::Vector2f(995.f, 995.f), backGroundColor, sf::Vector2f(2.5, 2.5),
        sf::Color::Cyan, 2.5);

    Tab bar(sf::Vector2f(150.f, 150.f), sf::Color::Black, sf::Vector2f(150, 300),
        sf::Color::Cyan, 2.5);
    Tab bar1(sf::Vector2f(150.f, 150.f), sf::Color::Black, sf::Vector2f(425, 300),
        sf::Color::Cyan, 2.5);
    Tab bar2(sf::Vector2f(150.f, 150.f), sf::Color::Black, sf::Vector2f(700, 300),
        sf::Color::Cyan, 2.5);
    Tab bar3(sf::Vector2f(150.f, 150.f), sf::Color::Black, sf::Vector2f(150, 600),
        sf::Color::Cyan, 2.5);
    Tab bar4(sf::Vector2f(150.f, 150.f), sf::Color::Black, sf::Vector2f(425, 600),
        sf::Color::Cyan, 2.5);
    Tab bar5(sf::Vector2f(150.f, 150.f), sf::Color::Black, sf::Vector2f(700, 600),
        sf::Color::Cyan, 2.5);

    sf::Text textTitle;
    sf::Text textTetris;
    sf::Font font;

    font.loadFromFile("Teko.ttf");

    //Title Text
    textTitle.setFont(font);
    textTitle.setString("Retro Runner");
    textTitle.setCharacterSize(75);
    textTitle.setFillColor(sf::Color::Cyan);

    sf::FloatRect textRect = textTitle.getLocalBounds();
    textTitle.setOrigin(textRect.width / 2, textRect.height / 2);
    textTitle.setPosition(sf::Vector2f(window.getSize().x / 2.f, window.getSize().y / 11.f));

    //Tetris Text
    textTetris.setFont(font);
    textTetris.setString("Tetris");
    textTetris.setCharacterSize(50);
    textTetris.setFillColor(sf::Color::Cyan);
    textTitle.setStyle(sf::Text::Bold);

    textTetris.setOrigin(textRect.width / 2, textRect.height / 2);
    textTetris.setPosition(sf::Vector2f(320, 475));

    //Draw object
    window.draw(background);
    window.draw(bar);
    window.draw(bar1);
    window.draw(bar2);
    window.draw(bar3);
    window.draw(bar4);
    window.draw(bar5);
    window.draw(textTitle);
    window.draw(textTetris);

    //Display
    window.display();
    result = 1;
    return result;
}

int Application::displayStartUpScreen()
{
    int result = 0;
    for (int i = 0; i < 100; i+=5)
    {
        cout << endl << endl << endl << endl << endl << endl << endl <<
            endl << endl << endl << endl << endl;
        cout << "                                                Starting Application...\n";
        cout << "                                                     Loading...";
        cout << i << "%";
        cout << endl << endl << endl << endl << endl << endl << endl << endl <<
            endl << endl << endl << endl << endl << endl << endl << endl;
        Sleep(1);
        system("cls");
        if (i == 95)
        {
            result = 1;
        }
    }
    system("cls");
    return result;
}

bool Application::checkDisplayStartUp() 
{
    bool result = false;
    if (displayStartUpScreen() == 1)
    {
        result = true;
    }
    return result;
}

void Application::displayClosingScreen()
{
    cout << endl << endl << endl << endl << endl << endl << endl <<
        endl << endl << endl << endl << endl;
    cout << "                                                Closing Application...";
    //Replace with Progress bar here
    cout << endl << endl << endl << endl << endl << endl << endl << endl <<
        endl << endl << endl << endl << endl << endl << endl << endl << endl;
    system("pause");
    system("cls");
}