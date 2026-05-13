#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Game");

    sf::RectangleShape player(sf::Vector2f(100.f, 100.f));

    player.setFillColor(sf::Color::Green);
    player.setPosition(300.f, 250.f);

    while(window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(player);

        window.display();
    }

    return 0;
}