/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// App_OnInit.cpp
//==============================================================================
#include "App.h"
//==============================================================================

bool App::OnInit()
{
	// Initialize SDL video (window, renderer) & audio
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO)<0)
    {
        return false;
    }
    window = SDL_CreateWindow("Stealth Soldier",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              WINDOW_WIDTH, WINDOW_HEIGHT,
                              SDL_WINDOW_SHOWN);
	
	// Initialize SDL TTF (font)
	TTF_Init();		
	font = TTF_OpenFont("lazy.ttf", 25);
	color = { 255, 255, 0 };

	// Initialize SDL Mixer
	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
	gMusic = Mix_LoadMUS("Audio/ssmusic.wav");
	gMine = Mix_LoadWAV("Audio/mine.wav");
	gWin = Mix_LoadWAV("Audio/winsound.wav");
	gLose = Mix_LoadWAV("Audio/losesound.wav");
	gSelect = Mix_LoadWAV("Audio/select.wav");

	Mix_VolumeMusic(75);
	Mix_PlayMusic(gMusic, -1);

	// Hide cursor
	SDL_ShowCursor(SDL_DISABLE);

	if (!window)
	{
		return false;
	}
    renderer = SDL_CreateRenderer(window, -1, 0);
	if (!renderer)
	{
		return false;
	}

    srand(time(NULL));

    for (int i = 0; i < NUM_TANKS; ++i)												// initialize tanks
	{
		tanks[i] = Vehicle("Images/tank.bmp", (100 * i), 250, -4, 0);
		tanks[i].loadObject(renderer);
    }

	for (int i = 0; i < NUM_TRANSPORTS; ++i)										// initialize transports
	{
		transports[i] = Vehicle("Images/transport.bmp", (100 * i), 350, 6, 0);
		transports[i].loadObject(renderer);
	}

	for (int i = 0; i < NUM_MINES; ++i)												// initialize mines
	{
		mines[i] = Object("Images/explosion.bmp", (0 - mines[i].position.w), (0 - mines[i].position.h), 0, 0);
		mines[i].loadObject(renderer);
	}

	soldier = Player("Images/soldier.bmp", 0, (window_h - 100), 0, 0);		// initialize Object
	soldier.loadObject(renderer);

	background = Screen("Images/stealthsoldierbackground.bmp", 0, 0, 0, 0);		// initialize background
	background.loadObject(renderer);

	gameoverscreen = Screen("Images/gameover.bmp", 0, 0, 0, 0);					// initialize 'you died' screen
	gameoverscreen.loadObject(renderer);

	winscreen = Screen("Images/youwin.bmp", 0, 0, 0, 0);							// initialize 'you win' screen
	winscreen.loadObject(renderer);

	introscreen = Screen("Images/introscreen.bmp", 0, 0, 0, 0);					// initialize 'intro' screen
	introscreen.loadObject(renderer);

    return true;
}
