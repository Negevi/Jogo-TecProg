#include <SFML/Graphics.hpp>

#include "Personagem.hpp"

class Principal {
    private:
        sf::RenderWindow* janela;
        Personagem jogador;
    public:
        Principal();
        ~Principal();
        void executar();

};