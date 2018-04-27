/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// App_OnEvent.cpp
//==============================================================================
#include "App.h"
//==============================================================================

void App::OnEvent(SDL_Event* Event) 
{
	if (Event->type == SDL_KEYDOWN)
	{
		if (Event->key.keysym.sym == SDLK_RETURN)			// game start
		{
			if (introScreen)
			{
				Mix_PlayChannel(1, gSelect, 0);
				introScreen = false;
			}
			if (gameOver)
			{
				Mix_PlayChannel(1, gSelect, 0);
				introScreen = true;
			}
		}
		if (Event->key.keysym.sym == SDLK_ESCAPE)			// game exit
		{
			Running = false;
		}

		if (!introScreen && !gameOver)						// player movement
		{
			if (Event->key.keysym.sym == SDLK_DOWN)
			{
				if (soldier.position.y < (window_h - 100))
				{
					soldier.position.y += 100;
				}
			}
			if (Event->key.keysym.sym == SDLK_UP)
			{
				if (soldier.position.y >= 100)
				{
					soldier.position.y -= 100;
				}
			}
			if (Event->key.keysym.sym == SDLK_LEFT)
			{
				if (soldier.position.x >= soldier.position.w)
				{
					soldier.position.x -= 100;
				}
			}
			if (Event->key.keysym.sym == SDLK_RIGHT)
			{
				if (soldier.position.x < (window_w - soldier.position.w))
				{
					soldier.position.x += 100;
				}
			}
		}
	}
}
