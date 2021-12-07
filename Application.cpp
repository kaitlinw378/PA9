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
    sf::RenderWindow window(sf::VideoMode(1250, 1250), "Tetris");
   

 
    sf::Vector2f size(window.getSize().x / 2.78, window.getSize().y / 20);
    sf::RectangleShape background(sf::Vector2f(1250.f, 1250.f));
    sf::RectangleShape shape(sf::Vector2f(500.f, 1000.f));
    background.setFillColor(sf::Color(50, 50, 50));
    shape.setPosition(200.f, 175.f);
    shape.setFillColor(sf::Color::Black);
    shape.setOutlineThickness(5.f);
    shape.setOutlineColor(sf::Color::Cyan);

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

    Tab bar(sf::Vector2f(size), sf::Color::Magenta, sf::Vector2f(150, 100));

    
    sf::Text text;
    sf::Font font;
    std::string message = "Hello World";

    font.loadFromFile("Teko.ttf");


    text.setFont(font);

    text.setString(message);

    text.setCharacterSize(50);

    text.setFillColor(sf::Color::Cyan);

    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.width / 2, textRect.height / 2);
    text.setPosition(sf::Vector2f(window.getSize().x / 5.25f, window.getSize().y / 11.5f));

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
        window.draw(shape);


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

        window.draw(bar);
       
        window.draw(text);

<<<<<<< HEAD
        piece.drawPiece(window); //testing piece drawing
=======
        piece.drawPiece(window);
>>>>>>> b7ea6a28f051efc43fb82161ce811c0a3fb0eac1

        window.display();

        

    }
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