#include <SFML/Graphics.hpp>

#include "Jogador.hpp"

class Principal {
    private:
        sf::RenderWindow* janela;
        sf::Texture bgTexture;
        sf::Sprite bgSprite;
        Jogador jogador;
    public:
        Principal();
        ~Principal();
        void executar();
        void setBackground(sf::Vector2f scale = {10.0f, 10.0f});
};