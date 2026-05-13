#include <SFML/Graphics.hpp>
 
int main()
{
    // Create a 800x600 window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML is working!");
 
    // Load a font
    sf::Font font;
    if (!font.loadFromFile("arial.ttf"))
    {
        // If no font file, we'll just use a colored rectangle as fallback
    }
 
    // Text to display
    sf::Text text;
    text.setFont(font);
    text.setString("SFML is working!");
    text.setCharacterSize(48);
    text.setFillColor(sf::Color::Green);
    text.setStyle(sf::Text::Bold);
 
    // Center the text
    sf::FloatRect textBounds = text.getLocalBounds();
    text.setOrigin(textBounds.left + textBounds.width / 2.f,
                   textBounds.top  + textBounds.height / 2.f);
    text.setPosition(400.f, 300.f);
 
    // A simple bouncing circle
    sf::CircleShape circle(40.f);
    circle.setFillColor(sf::Color(100, 200, 255));
    circle.setOrigin(40.f, 40.f);
    circle.setPosition(400.f, 500.f);
 
    float dx = 3.f, dy = 2.f;
 
    // Main loop
    while (window.isOpen())
    {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
 
            if (event.type == sf::Event::KeyPressed &&
                event.key.code == sf::Keyboard::Escape)
                window.close();
        }
 
        // Move the circle and bounce off walls
        circle.move(dx, dy);
        sf::Vector2f pos = circle.getPosition();
        if (pos.x < 40.f || pos.x > 760.f) dx = -dx;
        if (pos.y < 40.f || pos.y > 560.f) dy = -dy;
 
        // Draw everything
        window.clear(sf::Color(30, 30, 30));
        window.draw(text);
        window.draw(circle);
        window.display();
    }
 
    return 0;
}
