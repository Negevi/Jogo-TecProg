#include <SFML/Graphics.hpp>
#include <iostream>

#include "Principal.hpp"
#include "Jogador.hpp"

Principal::Principal(): jogador(Jogador(400.0f, 300.0f, "../assets/knight.png")), bgTexture(), bgSprite(bgTexture)
{
    janela = new sf::RenderWindow(sf::VideoMode({1920, 1080}), "Hello World");
    setBackground();
}

Principal::~Principal() { delete janela; }

void Principal::setBackground(sf::Vector2f scale) {
    if (!bgTexture.loadFromFile("../assets/background.png")) {
        std::cerr << "Falha ao carregar o background" << std::endl;
    }

    bgSprite.setTexture(bgTexture);
    bgSprite.setScale(scale);

}

void Principal::executar() {

    while (janela->isOpen()) {
        while (const std::optional event = janela->pollEvent()) {
            if (event->is<sf::Event::Closed>())
                janela->close();
        }

        janela->clear();
        janela->draw(bgSprite);
        jogador.desenhar(janela);
        jogador.atualizar();
        janela->display();  
    }
}