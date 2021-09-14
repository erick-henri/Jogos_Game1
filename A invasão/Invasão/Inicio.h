#ifndef  _INVASAO_INICIO_H_
#define _INVASAO_INICIO_H_

#include "Game.h"
#include "Sprite.h"
#include "Animation.h"
#include "TileSet.h"
// ------------------------------------------------------------------------------

class Inicio : public Game
{
private:
    TileSet* quadros = nullptr;
    Animation* anim = nullptr;
    Sprite* backg = nullptr;       // pano de fundo
    bool ctrlKey = false;
    bool ctrlKeyESC = false;

public:
    void Init();                    // inicializa��o
    void Update();                  // atualiza��o
    void Draw();                    // desenho
    void Finalize();                // finaliza��o
};

// -----------------------------------------------------------------------------

#endif
