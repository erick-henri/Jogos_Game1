#include "Alien.h"
#include "Fase1.h"
#include "Engine.h"
#include "Inicio.h"
#include "Fase2.h"

// ---------------------------------------------------------------------------------
int Alien::quantAliens = 0;
int Alien::progress = 0;
Alien::Alien(string img)
{
     
    quadros = new TileSet(img, 32, 32, 4, 8);
    anim = new Animation(quadros, 0.200f, true);


   // Cria a BBox correspondente ao sprite
    BBox(new Rect(-1.0f * 32 / 2.0f, -1.0f * 32 / 2.0f,
                 +1.0f * 32 / 2.0f, +1.0f * 32 / 2.0f));
    quantAliens++;
}

// ---------------------------------------------------------------------------------

Alien::~Alien()
{
    delete quadros;
    delete anim;
    quantAliens--;
}

// ---------------------------------------------------------------------------------

void Alien::OnCollision(Object* obj)
{
    // Caso esteja na fase1 vai chamar o scene delete da primeira fase
    if(Fase1::coli)
      Fase1::scene->Delete(obj, MOVING);

    // Caso esteja na fase2 vai chamar o scene delete da primeira fase
    if (Fase2::coli)
        Fase2::scene->Delete(obj, MOVING);
    
    // Para cada alien destruido, vai somar no progresso para mostrar o resultado do jogador no fim do jogo.
    progress++;
}

void Alien::Update()
{
    // Velocidade do alien descendo.
    Translate(0, +33 * gameTime);


   if (y > window->Height()-50)
    {
      // Caso algum alien passe dessa cordenada Y, irá ser como true a variavel bool para chamar a tela de fim de jogo
       
       Fase1::goNext = true;
    
       Fase2::goNext = true;
    }

   // Irá ficar chamando o próximo quadro da animação.
   anim->NextFrame();
}
// ---------------------------------------------------------------------------------
