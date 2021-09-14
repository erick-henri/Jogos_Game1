#ifndef _PACMAN_PLAYER_H_
#define _PACMAN_PLAYER_H_



// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"              // tipos espec�ficos da engine
#include "Object.h"             // interface de object
#include "Sprite.h"             // interface de sprites

// ---------------------------------------------------------------------------------

class Player : public Object
{
private:
    Sprite* sprite;            // sprite do player
    Image* missile;           // imagem do m�ssil
    float vel;                  // velocidade horizontal do player
    bool keyCtrl;               // controla pressionamento de tecla

public:

    static float playerx;
    static float playery;
    Player();
    ~Player();

    void Update();
    void Draw();
};

// ---------------------------------------------------------------------------------

inline void Player::Draw()
{
    sprite->Draw(x, y, z);
}

// ---------------------------------------------------------------------------------

#endif