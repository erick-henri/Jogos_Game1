#include "GameOver.h"
#include "Engine.h"
#include "Inicio.h"
#include "Progresso.h"
Scene* GameOver::scene = nullptr;
void GameOver::Init()
{
    //Irá chamar e adcionar um sprite para percorrer a tela mostrando o progresso do jogador.
    scene = new Scene();
   // backg = new Sprite("Resources/GameOver.png");

    quadros = new TileSet("Resources/GameOverAnim.png", 640, 720, 2, 2);
    anim = new Animation(quadros, 0.800f, true);
    Progresso* progresso;
    progresso = new Progresso();
    scene->Add(progresso, STATIC);
    
}

void GameOver::Update()
{
 
  
    scene->Update();
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


    // Retorna ao meu inicial com enter
    if (ctrlKey && window->KeyDown(VK_RETURN))
    {
        ctrlKey = false;
        Engine::Next<Inicio>();
    }
    if (window->KeyUp(VK_RETURN))
    {
        ctrlKey = true;
    }
}

void GameOver::Draw()
{
    //Desenha o fundo.
    // backg->Draw(320, 300, Layer::BACK);
    anim->Draw(320, 332);
    //Desenha as cenas.
    scene->Draw();
}

void GameOver::Finalize()
{
    delete scene;
    delete backg;
}
