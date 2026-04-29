#include <iostream>
#include <SFML/Window.hpp>
#include <optional>

int main()
{
    // Create a window
    sf::Window window(sf::VideoMode({800, 600}), "SFML Window");

    // Main loop
    while (window.isOpen())
    {
        // Process events
        std::optional<sf::Event> event;
        while ((event = window.pollEvent()))
        {
            // Check if it's a Closed event
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Display what was drawn
        window.display();
    }

    return 0;
}