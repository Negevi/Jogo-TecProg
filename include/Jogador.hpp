#pragma once

#include <SFML/Graphics.hpp>
#include "Personagem.hpp"

class Jogador : public Personagem {
    private:
    public:
        Jogador(float xInicial = 0.0f, float yInicial = 0.0f, const char* pathToTexture = nullptr);
        ~Jogador();
        virtual void atualizar();

};
