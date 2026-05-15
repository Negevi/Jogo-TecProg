#include <SFML/Graphics.hpp>
#include <iostream>
#include "Personagem.hpp"

sf::Texture carregarTextura(const char* pathToTexture) {
    sf::Texture textura;

    if(pathToTexture == nullptr) {
        if(textura.loadFromFile("placeholder.png")) {
            std::cout << "Substituindo por placeholder..." << std::endl;
            return textura;
        }
        else
            std::cerr << "Falha ao carregar a textura placeholder!" << std::endl;
    }

    if (!textura.loadFromFile(pathToTexture)) {
        std::cerr << "Falha ao carregar a textura para o caminho " << pathToTexture << std::endl;
        if(textura.loadFromFile("placeholder.png"))
            std::cout << ", substituindo por placeholder..." << std::endl;
        else
            std::cerr << "Falha ao carregar a textura placeholder!" << std::endl;
    }

    std::cout << "Tamanho da textura: " << textura.getSize().x << "x" << textura.getSize().y << std::endl;

    return textura;
}

Personagem::Personagem(float xInicial, float yInicial, const char* pathToTexture): textura(carregarTextura(pathToTexture)), sprite(textura) {

    posicao = sf::Vector2f(xInicial, yInicial);

    sprite.setTextureRect(sf::IntRect({0, 0}, {(int)textura.getSize().x, (int)textura.getSize().y}));

    sprite.setScale({0.5f, 0.5f});
    sprite.setPosition(posicao);
}

Personagem::~Personagem() {}

void Personagem::atualizar() { 
    posicao.x += 0.001; 
    posicao.y += 0.001; 
    sprite.setPosition(posicao);
}

void Personagem::desenhar(sf::RenderWindow* janela) {
    janela->draw(sprite);
}