//==============================================================================
// CDodger_OnRender.cpp
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