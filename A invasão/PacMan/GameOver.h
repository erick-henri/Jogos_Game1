#ifndef _PACMAN_GAMEOVER_H_
#define _PACMAN_GAMEOVER_H_

// ------------------------------------------------------------------------------
// Inclusões

#include "Game.h"
#include "Sprite.h"
#include "Scene.h"
#include "TileSet.h"
#include "Animation.h"
// ------------------------------------------------------------------------------

class GameOver : public Game
{
private:

    TileSet* quadros = nullptr;
    Animation* anim = nullptr;
    Sprite* backg = nullptr;       // background
    bool ctrlKey = true;
    bool ctrlKeyESC = false;

public:

    static Scene* scene;
    void Init();                    // inicializa jogo
    void Update();                  // atualiza lógica do jogo
    void Draw();                    // desenha jogo
    void Finalize();                // finaliza jogo
};

// -----------------------------------------------------------------------------

#endif