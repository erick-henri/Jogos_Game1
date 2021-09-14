#ifndef _PACMAN_MISSILE_H_
#define _PACMAN_MISSILE_H_
// ---------------------------------------------------------------------------------
// Inclus�es

#include "Types.h"              // tipos espec�ficos da engine
#include "Object.h"             // interface de object
#include "Sprite.h"             // interface de sprites
#include "Image.h"              // interface de image

// ---------------------------------------------------------------------------------

class Missile : public Object
{
private:
    //
    Sprite* sprite;
    float vel;
    
public:
    Missile(Image* img, float posX, float posY);
    ~Missile();
    void OnCollision(Object* obj);     
    void Update();
    void Draw();
};

// ---------------------------------------------------------------------------------
// Fun��es Membro Inline
inline void Missile::Draw()
{
    sprite->Draw(x, y, z);
}

// ---------------------------------------------------------------------------------

#endif