#include <SFML/Graphics.hpp>
 
int main()
{
    sf::RenderWindow window(sf::VideoMode({800u, 600u}), "SFML is working!");
 
    sf::CircleShape circle(40.f);
    circle.setFillColor(sf::Color(100, 200, 255));
    circle.setOrigin({40.f, 40.f});
    circle.setPosition({400.f, 300.f});
 
    float dx = 3.f, dy = 2.f;
 
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
 
        circle.move({dx, dy});
        sf::Vector2f pos = circle.getPosition();
        if (pos.x < 40.f || pos.x > 760.f) dx = -dx;
        if (pos.y < 40.f || pos.y > 560.f) dy = -dy;
 
        window.clear(sf::Color(30, 30, 30));
        window.draw(circle);
        window.display();
    }
 
    return 0;
}
 
