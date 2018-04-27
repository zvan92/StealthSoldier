/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// App.cpp
//==============================================================================
#include "App.h"
//==============================================================================

App::App()
{
    Running = true;
}

//==============================================================================
Uint32 App::time_left(void)
{
    Uint32 now;

    now = SDL_GetTicks();
    if(next_time <= now)
        return 0;
    else
        return next_time - now;
}

//==============================================================================
int App::OnExecute()
{
    if(OnInit() == false)
    {
        return -1;
    }

    SDL_Event Event;
    next_time = SDL_GetTicks() + TICK_INTERVAL;
    while(Running)
    {
        while(SDL_PollEvent(&Event))
        {
            OnEvent(&Event);
        }

        OnLoop();
        OnRender();
    }

    OnCleanup();

    return 0;
}

//==============================================================================
int main(int argc, char* argv[])
{
    App theApp;

    return theApp.OnExecute();
}