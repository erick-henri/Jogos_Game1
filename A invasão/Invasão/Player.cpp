

#include "Player.h"
#include "Missile.h"
#include "Invasao.h"
#include "Fase1.h"
#include "Fase2.h"
// ---------------------------------------------------------------------------------

float Player::playerx = 0;
float Player::playery = 0;
Player::Player()
{
    sprite = new Sprite("Resources/Nave.png");
    missile = new Image("Resources/Missile.png");

    MoveTo(window->CenterX() - sprite->Width() / 2.0f, window->Height() - 50.0f, Layer::FRONT);
    vel = 160;
    keyCtrl = true;
}

// ---------------------------------------------------------------------------------

Player::~Player()
{
    delete sprite;
    delete missile;
}

// ---------------------------------------------------------------------------------

void Player::Update()
{
    // dispara um míssil com a barra de espaço
    
   /* if (keyCtrl && window->KeyDown(VK_SPACE))
    {
        
  
        Missile* m = new Missile(missile, x + sprite->Width() / 2.0f - 16, y);
        m->MoveTo(x + sprite->Width() / 2.0f - 16, y, Layer::UPPER);
        Fase1::scene->Add(m,MOVING);
        Fase2::scene->Add(m, MOVING);
        keyCtrl = false;
    }
    else if (window->KeyUp(VK_SPACE))
    {
        // habilita disparo de míssil se tecla for liberada
        keyCtrl = true;
    }*/

    // desloca nave horizontalmente
    if (window->KeyDown(VK_RIGHT))
        Translate(vel * gameTime, 0);
    if (window->KeyDown(VK_LEFT))
        Translate(-vel * gameTime, 0);

    Player::playerx = (x + sprite->Width() / 2.0f - 16);
    Player::playery = y;

    // Mantem o player nave dentro da janela
    if (x < 0)
        MoveTo(0, y);
    if (x + sprite->Width() > window->Width())
        MoveTo(float(window->Width() - sprite->Width()), y);
}

// ---------------------------------------------------------------------------------
