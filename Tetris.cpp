#include "Tetris.h"
#include "Rectangle.h"

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
    sf::RenderWindow window(sf::VideoMode(625, 625), "Tetris");



    sf::Vector2f size(window.getSize().x / 2.78, window.getSize().y / 20);
    sf::RectangleShape background(sf::Vector2f(625.f, 625.f));
    
    Rectangle board(sf::Vector2f(250, 500), sf::Color::Black, sf::Vector2f(100, 87.5), sf::Color::Cyan, 2.5);
    background.setFillColor(sf::Color(50, 50, 50));
   

    sf::RectangleShape shape2(sf::Vector2f(200.f, 337.5f));
    shape2.setPosition(387.5f, 250.f);
    shape2.setFillColor(sf::Color::Black);

    sf::Vertex line1[] =
    {
        sf::Vertex(sf::Vector2f(125.f, 87.5f)),
        sf::Vertex(sf::Vector2f(125.f, 587.5f))
    };
    sf::Vertex line2[] =
    {
        sf::Vertex(sf::Vector2f(175.f, 87.5f)),
        sf::Vertex(sf::Vector2f(175.f, 587.5f))
    };
    sf::Vertex line3[] =
    {
        sf::Vertex(sf::Vector2f(225.f, 87.5f)),
        sf::Vertex(sf::Vector2f(225.f, 587.5f))
    };
    sf::Vertex line4[] =
    {
        sf::Vertex(sf::Vector2f(275.f, 87.5f)),
        sf::Vertex(sf::Vector2f(275.f, 587.5f))
    };
    sf::Vertex line5[] =
    {
        sf::Vertex(sf::Vector2f(325.f, 87.5f)),
        sf::Vertex(sf::Vector2f(325.f, 587.5f))
    };
    sf::Vertex line6[] =
    {
        sf::Vertex(sf::Vector2f(150.f, 87.5f)),
        sf::Vertex(sf::Vector2f(150.f, 587.5f))
    };
    sf::Vertex line7[] =
    {
        sf::Vertex(sf::Vector2f(200.f, 87.5f)),
        sf::Vertex(sf::Vector2f(200.f, 587.5f))
    };
    sf::Vertex line8[] =
    {
        sf::Vertex(sf::Vector2f(250.f, 87.5f)),
        sf::Vertex(sf::Vector2f(250.f, 587.5f))
    };
    sf::Vertex line9[] =
    {
        sf::Vertex(sf::Vector2f(300.f, 87.5f)),
        sf::Vertex(sf::Vector2f(300.f, 587.5f))
    };
    sf::Vertex line10[] =
    {
        sf::Vertex(sf::Vector2f(350.f, 87.5f)),
        sf::Vertex(sf::Vector2f(350.f, 587.5f))
    };
    sf::Vertex line11[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 612.5f)),
        sf::Vertex(sf::Vector2f(350.f, 612.5f))
    };
    sf::Vertex line12[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 562.5f)),
        sf::Vertex(sf::Vector2f(350.f, 562.5f))
    };
    sf::Vertex line13[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 512.5f)),
        sf::Vertex(sf::Vector2f(350.f, 512.5f))
    };
    sf::Vertex line14[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 462.5f)),
        sf::Vertex(sf::Vector2f(350.f, 462.5f))
    };
    sf::Vertex line15[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 412.5f)),
        sf::Vertex(sf::Vector2f(350.f, 412.5f))
    };
    sf::Vertex line16[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 362.5f)),
        sf::Vertex(sf::Vector2f(350.f, 362.5f))
    };
    sf::Vertex line17[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 312.5f)),
        sf::Vertex(sf::Vector2f(350.f, 312.5f))
    };
    sf::Vertex line18[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 262.5f)),
        sf::Vertex(sf::Vector2f(350.f, 262.5f))
    };
    sf::Vertex line19[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 212.5f)),
        sf::Vertex(sf::Vector2f(350.f, 212.5f))
    };
    
    sf::Vertex line20[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 162.5f)),
        sf::Vertex(sf::Vector2f(350.f, 162.5f))
    };
    sf::Vertex line21[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 112.5f)),
        sf::Vertex(sf::Vector2f(350.f, 112.5f))
    };
    sf::Vertex line22[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 487.5f)),
        sf::Vertex(sf::Vector2f(350.f, 487.5f))
    };
    sf::Vertex line23[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 437.5f)),
        sf::Vertex(sf::Vector2f(350.f, 437.5f))
    };
    sf::Vertex line24[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 387.5f)),
        sf::Vertex(sf::Vector2f(350.f, 387.5f))
    };
    sf::Vertex line25[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 337.5f)),
        sf::Vertex(sf::Vector2f(350.f, 337.5f))
    };
    sf::Vertex line26[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 287.5f)),
        sf::Vertex(sf::Vector2f(350.f, 287.5f))
    };
    sf::Vertex line27[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 237.5f)),
        sf::Vertex(sf::Vector2f(350.f, 237.5f))
    };
    sf::Vertex line28[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 187.5f)),
        sf::Vertex(sf::Vector2f(350.f, 187.5f))
    };
    sf::Vertex line29[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 137.5f)),
        sf::Vertex(sf::Vector2f(350.f, 137.5f))
    };
    sf::Vertex line30[] =
    {
        sf::Vertex(sf::Vector2f(100.f, 537.5f)),
        sf::Vertex(sf::Vector2f(350.f, 537.5f))
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
    GamePiece piece;
  
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
        //window.draw(shape);
        window.draw(shape2);
        window.draw(board);

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
        //window.draw(line11, 2, sf::Lines);
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
        piece.controlPiece(window);
        
        //<<<<<< < HEAD
        //    //piece.drawPiece(window); //testing piece drawing

        //    //piece.drawPiece(window);
        //    ====== =
        //    piece.drawPiece(window); //testing piece drawing

        //>>>>>> > d521e7e1bcdfd1466ee481b805686f1ba1195a6d


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