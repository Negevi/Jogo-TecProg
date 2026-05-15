#include <SFML/Graphics.hpp>

#include "Principal.hpp"

Principal::Principal(): jogador(Personagem(400.0f, 300.0f, "../assets/littkle.png"))
{
    janela = new sf::RenderWindow(sf::VideoMode({800, 600}), "Hello World");
}

Principal::~Principal() { delete janela; }

void Principal::executar() {
    while(janela->isOpen()) {
        janela->clear();
        jogador.atualizar();
        jogador.desenhar(janela);
        janela->display();
    }
}