#include "Missile.h"
#include "Invasao.h"
#include "Fase1.h"
#include "Fase2.h"

// ---------------------------------------------------------------------------------

Missile::Missile(Image* img, float posX, float posY)
{
    // Recebe o diretório do sprite do missel.
    sprite = new Sprite(img);
    vel = 250;
    
    // Cria a BBox correspondente ao sprite
    BBox(new Rect(-1.0f * sprite->Width() / 4.0f, -1.0f * sprite->Height() / 3.0f,
       +1.0f * sprite->Width() / 4.0f, +1.0f * sprite->Height() / 4.0f));
}

// ---------------------------------------------------------------------------------

Missile::~Missile()
{
    delete sprite;
}

void Missile::OnCollision(Object* obj)
{
    // Caso esteja na fase1 vai chamar o scene delete da primeira fase.
    if(Fase1::coli)
       Fase1::scene->Delete(obj, STATIC);

    // Caso esteja na fase2 vai chamar o scene delete da primeira fase.
    if (Fase2::coli)
        Fase2::scene->Delete(obj, STATIC);

}

// ---------------------------------------------------------------------------------

void Missile::Update()
{
    // míssil se move apenas no eixo y
    Translate(0, -vel * gameTime);

}

// ---------------------------------------------------------------------------------
