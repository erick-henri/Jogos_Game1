#include "Fase1.h"
#include "Inicio.h"
#include "Engine.h"
#include "Player.h"
#include "Alien.h"
#include <string>
#include <fstream>
#include "Scene.h"
#include "Fase2.h"
#include "GameOver.h"
#include "Missile.h"
using std::ifstream;
using std::string;


Scene* Fase1::scene = nullptr;
bool Fase1::goNext = false;
bool Fase1::coli = false;

void Fase1::Init()
{
    //Quando iniciar a fase, irá colocar como true o coli, para tratar a colisão dos misseis.
    coli = true;


    scene = new Scene();
    backg = new Sprite("Resources/Background1.png");
    missile = new Image("Resources/Missile.png");

    scene->Add(new Player(), STATIC);

    // ------------------------------
    // Criação dos alienigenas tipo1.

    float offset = 30;
    float posY = 50;

    Alien* alien;

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset +50, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 10, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 90, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 140, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 190, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 240, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 290, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 340, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 390, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 440, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 490, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 540, posY);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/AlienAni.png");
    alien->MoveTo(offset + 590, posY);
    scene->Add(alien, STATIC);

    // -----------------------------------------
     // Criação dos alienigenas tipo2.

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 50, posY+45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 10, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 90, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 140, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 190, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 240, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 290, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 340, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 390, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 440, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 490, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 540, posY + 45);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien2Ani.png");
    alien->MoveTo(offset + 590, posY + 45);
    scene->Add(alien, STATIC);

    // --------------------------------------
       // Criação dos alienigenas tipo3.


    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 50, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 10, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 90, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 140, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 190, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 240, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 290, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 340, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 390, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 440, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 490, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 540, posY + 90);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien3Ani.png");
    alien->MoveTo(offset + 590, posY + 90);
    scene->Add(alien, STATIC);

    //----------------------------------------
       // Criação dos alienigenas tipo4.


    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 50, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 10, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 90, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 140, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 190, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 240, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 290, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 340, posY + 135);
    scene->Add(alien, STATIC);
  
    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 390, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 440, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 490, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 540, posY + 135);
    scene->Add(alien, STATIC);

    alien = new Alien("Resources/Alien4Ani.png");
    alien->MoveTo(offset + 590, posY + 135);
    scene->Add(alien, STATIC);

    
}

// ------------------------------------------------------------------------------

void Fase1::Update()
{
    // sai com o pressionamento do ESC
    if (window->KeyDown(VK_ESCAPE))
        window->Close();
   
    // atualiza objetos da cena
    scene->Update();
    scene->CollisionDetection();
  

    // Irá criar um missel caso seja pressionado o spaço.
    if (keyCtrl && window->KeyDown(VK_SPACE))
    {


        Missile* m = new Missile(missile, Player::playerx, Player::playery);
        m->MoveTo(Player::playerx, Player::playery, Layer::UPPER);
        scene->Add(m,MOVING);
        keyCtrl = false;
    }
    else if (window->KeyUp(VK_SPACE))
    {
        // habilita disparo de míssil se tecla for liberada
        keyCtrl = true;
    }


    // Caso algum chegue ao chão, o jogador irá ser direcionado a tela de game over.
    if (goNext)
    {  
        goNext = false;
         Engine::Next<GameOver>();
    }


    // Caso todos os aliens sejam destruidos, irá para a próxima fase
    if (Alien::quantAliens == 0)
    {
        Engine::Next<Fase2>();
    }
}

// ------------------------------------------------------------------------------

void Fase1::Draw()
{
    // desenha pano de fundo
    backg->Draw(320, 370, Layer::BACK);
    
    // Desenha a cena
    scene->Draw();
}

// ------------------------------------------------------------------------------

void Fase1::Finalize()
{
    // apaga sprites
    delete backg;

    // apaga cena do jogo
    delete scene;

    // apaga o missel
    delete missile;

    //Quando finalizar, irá ser dado como falso para não gerar erro qunado for tratar a colisão da fase2.
    coli = false;
}
