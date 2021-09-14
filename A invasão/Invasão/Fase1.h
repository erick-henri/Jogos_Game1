#ifndef __INVASAOFASE1_H_
#define _INVASAO_FASE1_H_

// ------------------------------------------------------------------------------
// Inclusões

#include "Game.h"
#include "Sprite.h"
#include "Scene.h"

// ------------------------------------------------------------------------------

class Fase1 : public Game
{
private:
    Sprite* backg = nullptr;       // background
    Image* missile;
    bool keyCtrl;
    bool ctrlKeyB = false;

public:

    static bool coli;
    static bool goNext;
    static Scene* scene;
    void Init();                    // inicializa jogo
    void Update();                  // atualiza lógica do jogo
    void Draw();                    // desenha jogo
    void Finalize();                // finaliza jogo
};

// -----------------------------------------------------------------------------

#endif