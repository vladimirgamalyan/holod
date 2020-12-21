#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

    sf::Texture texture;
    if (!texture.loadFromFile("data/square.png"))
        return 1;

    sf::Sprite sprite;
    sprite.setTexture(texture);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(128, 128, 128, 255));
        window.draw(sprite);
        window.display();
    }

    return 0;
}
