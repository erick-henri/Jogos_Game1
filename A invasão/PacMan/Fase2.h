#ifndef _PACMAN_FASE2_H_
#define _PACMAN_FASE2_H_

// ------------------------------------------------------------------------------
// Inclus�es

#include "Game.h"
#include "Sprite.h"
#include "Scene.h"

// ------------------------------------------------------------------------------

class Fase2 : public Game
{
private:
    Sprite* backg = nullptr;       // background
   // Scene* scene = nullptr;       // gerenciador de cena
    Image* missile;
    bool viewBBox = false;          // habilita visualiza��o da bounding box
    bool keyCtrl;

public:

    static bool coli;
    static bool goNext;
    static Scene* scene;
    void Init();                    // inicializa jogo
    void Update();                  // atualiza l�gica do jogo
    void Draw();                    // desenha jogo
    void Finalize();                // finaliza jogo
};

// -----------------------------------------------------------------------------

#endif