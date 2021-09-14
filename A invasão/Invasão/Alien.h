#ifndef _INVASAO_ALIEN_H_
#define _INVASAO_ALIEN_H_
// ---------------------------------------------------------------------------------
// Inclusões

#include "Types.h"          // tipos específicos da engine
#include "Object.h"         // interface de object
#include "Sprite.h"         // interface de sprites
#include <string>           // string da biblioteca STL
#include "Animation.h"
#include "TileSet.h"
using std::string;          // usa string sem std::

// ---------------------------------------------------------------------------------

class Alien : public Object
{
private:

    TileSet* quadros = nullptr;      
    Animation* anim = nullptr;         

public:
    Alien(string filename);
    ~Alien();

    static int quantAliens;
    static int progress;
    void OnCollision(Object* obj);
    void Update();
    void Draw();
};

// ---------------------------------------------------------------------------------

inline void Alien::Draw()
{
    anim->Draw(x, y, z);
}

// ---------------------------------------------------------------------------------

#endif