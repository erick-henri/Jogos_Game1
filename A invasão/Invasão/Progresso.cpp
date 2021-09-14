#include "Progresso.h"
#include "Alien.h"
#include "Engine.h"
Progresso::Progresso()
{
    // Carrega e adciona o sprite igual ao "player" para mostrar o progresso.
    sprite = new Sprite("Resources/Nave.png");
    MoveTo(window->CenterX()-200, window->Height() - 100.0f, Layer::FRONT);
    posBandeira = (window->CenterX() + 100);
    vel = 100;
    progresso = Alien::progress;
}

// ---------------------------------------------------------------------------------

Progresso::~Progresso()
{
    delete sprite;
}

// ---------------------------------------------------------------------------------

void Progresso::Update()
{
    //Irá percorrer a tela conforme a quantidade de aliens que você destruiu.
    Translate(+vel * gameTime, 0);
    if (x > (window->CenterX()-300) +2*(progresso * 2.884))
    {
        // Caso chege a coordenada determinada, irá freiar.
        vel = 0;
    }
    
}

// ---------------------------------------------------------------------------------
