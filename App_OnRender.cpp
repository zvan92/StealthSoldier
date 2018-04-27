/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// App_OnRender.cpp
//==============================================================================
#include "App.h"
//==============================================================================

void App::OnRender()
{
    /* Update the screen! */
    SDL_RenderPresent(renderer);
    SDL_Delay(time_left());
    next_time += TICK_INTERVAL;
}
