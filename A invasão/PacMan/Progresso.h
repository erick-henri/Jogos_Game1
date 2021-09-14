#ifndef _PACMAN_PROGRESSO_H_
#define _PACMAN_PROGRESSO_H_



// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"              // tipos específicos da engine
#include "Object.h"             // interface de object
#include "Sprite.h"             // interface de sprites

// ---------------------------------------------------------------------------------

class Progresso : public Object
{
private:
    Sprite* sprite;            // sprite do player
    float vel;                  // velocidade horizontal do player
    float posBandeira;
    int progresso;

public:
    Progresso();
    ~Progresso();

    void Update();
    void Draw();
};

// ---------------------------------------------------------------------------------

inline void Progresso::Draw()
{
    sprite->Draw(x, y, z);
}

// ---------------------------------------------------------------------------------
#endif