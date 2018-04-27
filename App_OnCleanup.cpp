//==============================================================================
// App_OnEvent.cpp
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