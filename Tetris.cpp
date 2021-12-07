#include "Tetris.h"

Tetris::Tetris()
{
	displayStartUpScreen();
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
    // display menu window with menu options
}

void Tetris::displayStartUpScreen()
{

}

void Tetris::displayClosingScreen()
{

}

void Tetris::play()
{
    //Plays the game of tetris
    sf::RenderWindow window(sf::VideoMode(1250, 1250), "Tetris");



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

    sf::Vertex line1[] =
    {
        sf::Vertex(sf::Vector2f(250.f, 175.f)),
        sf::Vertex(sf::Vector2f(250.f, 1175.f))
    };
    sf::Vertex line2[] =
    {
        sf::Vertex(sf::Vector2f(350.f, 175.f)),
        sf::Vertex(sf::Vector2f(350.f, 1175.f))
    };
    sf::Vertex line3[] =
    {
        sf::Vertex(sf::Vector2f(450.f, 175.f)),
        sf::Vertex(sf::Vector2f(450.f, 1175.f))
    };
    sf::Vertex line4[] =
    {
        sf::Vertex(sf::Vector2f(550.f, 175.f)),
        sf::Vertex(sf::Vector2f(550.f, 1175.f))
    };
    sf::Vertex line5[] =
    {
        sf::Vertex(sf::Vector2f(650.f, 175.f)),
        sf::Vertex(sf::Vector2f(650.f, 1175.f))
    };
    sf::Vertex line6[] =
    {
        sf::Vertex(sf::Vector2f(300.f, 175.f)),
        sf::Vertex(sf::Vector2f(300.f, 1175.f))
    };
    sf::Vertex line7[] =
    {
        sf::Vertex(sf::Vector2f(400.f, 175.f)),
        sf::Vertex(sf::Vector2f(400.f, 1175.f))
    };
    sf::Vertex line8[] =
    {
        sf::Vertex(sf::Vector2f(500.f, 175.f)),
        sf::Vertex(sf::Vector2f(500.f, 1175.f))
    };
    sf::Vertex line9[] =
    {
        sf::Vertex(sf::Vector2f(600.f, 175.f)),
        sf::Vertex(sf::Vector2f(600.f, 1175.f))
    };
    sf::Vertex line10[] =
    {
        sf::Vertex(sf::Vector2f(700.f, 175.f)),
        sf::Vertex(sf::Vector2f(700.f, 1175.f))
    };
    sf::Vertex line11[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 1125.f)),
        sf::Vertex(sf::Vector2f(700.f, 1125.f))
    };
    sf::Vertex line12[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 1075.f)),
        sf::Vertex(sf::Vector2f(700.f, 1075.f))
    };
    sf::Vertex line13[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 1025.f)),
        sf::Vertex(sf::Vector2f(700.f, 1025.f))
    };
    sf::Vertex line14[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 925.f)),
        sf::Vertex(sf::Vector2f(700.f, 925.f))
    };
    sf::Vertex line15[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 825.f)),
        sf::Vertex(sf::Vector2f(700.f, 825.f))
    };
    sf::Vertex line16[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 725.f)),
        sf::Vertex(sf::Vector2f(700.f, 725.f))
    };
    sf::Vertex line17[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 625.f)),
        sf::Vertex(sf::Vector2f(700.f, 625.f))
    };
    sf::Vertex line18[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 525.f)),
        sf::Vertex(sf::Vector2f(700.f, 525.f))
    };
    sf::Vertex line19[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 425.f)),
        sf::Vertex(sf::Vector2f(700.f, 425.f))
    };
    sf::Vertex line20[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 425.f)),
        sf::Vertex(sf::Vector2f(700.f, 425.f))
    };
    sf::Vertex line21[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 325.f)),
        sf::Vertex(sf::Vector2f(700.f, 325.f))
    };
    sf::Vertex line22[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 225.f)),
        sf::Vertex(sf::Vector2f(700.f, 225.f))
    };
    sf::Vertex line23[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 975.f)),
        sf::Vertex(sf::Vector2f(700.f, 975.f))
    };
    sf::Vertex line24[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 875.f)),
        sf::Vertex(sf::Vector2f(700.f, 875.f))
    };
    sf::Vertex line25[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 775.f)),
        sf::Vertex(sf::Vector2f(700.f, 775.f))
    };
    sf::Vertex line26[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 675.f)),
        sf::Vertex(sf::Vector2f(700.f, 675.f))
    };
    sf::Vertex line27[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 575.f)),
        sf::Vertex(sf::Vector2f(700.f, 575.f))
    };
    sf::Vertex line28[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 475.f)),
        sf::Vertex(sf::Vector2f(700.f, 475.f))
    };
    sf::Vertex line29[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 375.f)),
        sf::Vertex(sf::Vector2f(700.f, 375.f))
    };
    sf::Vertex line30[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 275.f)),
        sf::Vertex(sf::Vector2f(700.f, 275.f))
    };

    // Tab bar(sf::Vector2f(size), sf::Color::Magenta, sf::Vector2f(150, 100));


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

        window.draw(line1, 2, sf::Lines);
        window.draw(line2, 2, sf::Lines);
        window.draw(line3, 2, sf::Lines);
        window.draw(line4, 2, sf::Lines);
        window.draw(line5, 2, sf::Lines);
        window.draw(line6, 2, sf::Lines);
        window.draw(line7, 2, sf::Lines);
        window.draw(line8, 2, sf::Lines);
        window.draw(line9, 2, sf::Lines);
        window.draw(line10, 2, sf::Lines);
        window.draw(line11, 2, sf::Lines);
        window.draw(line12, 2, sf::Lines);
        window.draw(line13, 2, sf::Lines);
        window.draw(line14, 2, sf::Lines);
        window.draw(line15, 2, sf::Lines);
        window.draw(line16, 2, sf::Lines);
        window.draw(line17, 2, sf::Lines);
        window.draw(line18, 2, sf::Lines);
        window.draw(line19, 2, sf::Lines);
        window.draw(line20, 2, sf::Lines);
        window.draw(line21, 2, sf::Lines);
        window.draw(line22, 2, sf::Lines);
        window.draw(line23, 2, sf::Lines);
        window.draw(line24, 2, sf::Lines);
        window.draw(line25, 2, sf::Lines);
        window.draw(line26, 2, sf::Lines);
        window.draw(line27, 2, sf::Lines);
        window.draw(line28, 2, sf::Lines);
        window.draw(line29, 2, sf::Lines);
        window.draw(line30, 2, sf::Lines);

        //window.draw(bar);

        window.draw(text);


        //piece.drawPiece(window);
        window.display();
    }
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