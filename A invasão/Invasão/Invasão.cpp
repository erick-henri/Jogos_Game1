#include "Engine.h"
#include "Player.h"
#include "Resources.h"
#include "Inicio.h"



// ------------------------------------------------------------------------------



// ------------------------------------------------------------------------------
//                                  WinMain                                      
// ------------------------------------------------------------------------------

int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
    Engine* engine = new Engine();

    // configura e inicia o jogo
    engine->window->Mode(WINDOWED);
    engine->window->Size(640, 720);
    engine->window->Color(0, 0, 0);
    engine->window->Title("Invasão");
    engine->window->Icon(IDI_ICON);

    // configura dispositivo gráfico
    //engine->graphics->VSync(true);

    // inicia o jogo
    int status = engine->Start(new Inicio());

    // destrói o motor e o jogo
    delete engine;
    return status;
}

// ----------------------------------------------------------------------------

