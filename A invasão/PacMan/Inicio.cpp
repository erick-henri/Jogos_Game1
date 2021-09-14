#include "Engine.h"
#include "Inicio.h"
#include "Invasao.h"
#include "Fase1.h"
#include "TileSet.h"
#include "Animation.h"
// ------------------------------------------------------------------------------

void Inicio::Init()
{
    //backg = new Sprite("Resources/inicio.png");

    quadros = new TileSet("Resources/InicioAni.png",640, 720, 2, 2);
    anim = new Animation(quadros, 0.800f, true);

}

// ------------------------------------------------------------------------------

void Inicio::Finalize()
{
    delete backg;
    delete quadros;
    delete anim;
}

// ------------------------------------------------------------------------------

void Inicio::Update()
{
    anim->NextFrame();
    // sai do jogo com a tecla ESC
    if (ctrlKeyESC && window->KeyDown(VK_ESCAPE))
    {
        ctrlKeyESC = false;
        window->Close();
    }
    else if (window->KeyUp(VK_ESCAPE))
    {
        ctrlKeyESC = true;
    }

    // Acassa ao primeiro nível com ENTER
    if ( ctrlKey && window->KeyDown(VK_RETURN))
    {
        ctrlKey = false;
        Engine::Next<Fase1>();
    }
    if (window->KeyUp(VK_RETURN))
    {
        ctrlKey = true;
    }
}

// ------------------------------------------------------------------------------

void Inicio::Draw()
{
    // Desenha o fundo da tela.
    // backg->Draw(320,332, Layer::BACK);
    anim->Draw(320, 332);
}

// ------------------------------------------------------------------------------