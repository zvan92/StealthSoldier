/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// App_OnCleanup.cpp
//==============================================================================
#include "App.h"
//==============================================================================

void App::OnCleanup() 
{
	TTF_CloseFont(font);
	TTF_Quit;

	Mix_FreeChunk(gWin);
	gWin = NULL;
	Mix_FreeChunk(gLose);
	gLose = NULL;
	Mix_FreeChunk(gSelect);
	gSelect = NULL;
	Mix_FreeChunk(gMine);
	gMine = NULL;
	Mix_FreeMusic(gMusic);
	gMusic = NULL;
	Mix_Quit;

	SDL_Quit();
}
