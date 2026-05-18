#include <SFML/Graphics.hpp>

#include "Jogador.hpp"

Jogador::Jogador(float xInicial, float yInicial, const char* pathToTexture)
    : Personagem(xInicial, yInicial, pathToTexture) {}

Jogador::~Jogador() {}

void Jogador::atualizar() {

    float velocidade = 0.1f; // MUDAR
    
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        moverY(-velocidade);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        moverY(velocidade);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        moverX(-velocidade);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        moverX(velocidade);
}