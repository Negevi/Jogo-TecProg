#include <SFML/Graphics.hpp>

class Personagem {
    private:
        sf::Vector2f posicao;
        sf::Texture textura;
        sf::Sprite sprite;
    public:
        Personagem(float xInicial = 0.0f, float yInicial = 0.0f, const char* pathToTexture = nullptr);
        ~Personagem();
        void atualizar();
        void desenhar(sf::RenderWindow* janela);
};