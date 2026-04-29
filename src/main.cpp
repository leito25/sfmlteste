#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    // Create a window
    sf::Window window;

    window.create(sf::VideoMode({800, 600}), "Mon super project SFML 3");

    window.setTitle("Mon jeux video SFML 3");

    // Loop that continues until we close the window
    while (window.isOpen())
    {
    }

    return 0;
}

// Video 7 SFML FR
/*
This is a way to create a windows
// Create a window
    sf::Window window;

    window.create(sf::VideoMode({800, 600}), "Mon super project SFML 3");

    window.setTitle("Mon jeux video SFML 3");

    // Loop that continues until we close the window
    while (window.isOpen())
    {
    }

    return 0;
*/

// SFML 3 Sample teste
/*
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
*/