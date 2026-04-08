#include <SFML/Graphics.hpp>

int main()
{
    // SFML 3 takes a sf::Vector2u directly for VideoMode
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML 3 Hello World");

    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    
    // SFML 3 encourages brace initialization for vectors
    circle.setPosition({300.f, 200.f});

    while (window.isOpen())
    {
        // SFML 3 replaces the old event loop with std::optional
        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            // Events are now type-safe and checked using .is<T>()
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(circle);
        window.display();
    }

    return 0;
}