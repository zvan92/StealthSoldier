/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// App.h
//==============================================================================
#ifndef _APP_H_
#define _APP_H_
//==============================================================================
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdlib.h>
#include <cstring>
#include <time.h>
#include <iostream>
//==============================================================================
#define TICK_INTERVAL   10
#define NUM_TRANSPORTS  4
#define NUM_TANKS		5
#define NUM_MINES		16
#define MAX_SPEED       1
//==============================================================================
#include "Player.h"
#include "Object.h"
#include "Vehicle.h"
#include "Screen.h"
#include "mywindow.h"
//==============================================================================
using namespace std;

class App
{
private:
    bool Running;

	Mix_Music *gMusic = NULL;				// Music track
	Mix_Chunk *gMine = NULL;				// Sound effects
	Mix_Chunk *gWin = NULL;
	Mix_Chunk *gLose = NULL;
	Mix_Chunk *gSelect = NULL;

    Uint32 next_time;
    SDL_Window *window;
    SDL_Renderer *renderer;
	
	Screen background;						// Background object
	Screen gameoverscreen;					// Game over screen
	Screen introscreen;						// Intro screen
	Screen winscreen;						// Win screen

	Vehicle tanks[NUM_TANKS];				// Array of tanks
	Vehicle transports[NUM_TRANSPORTS];		// Array of transports
	
	Object mines[NUM_MINES];				// Array of mines (mines)
	
	Player soldier;							// Object soldier object
	int numberOfLives;						// Object lives counter

	bool gameOver = false;					// Game state flags
	bool introScreen = true;
	bool gameWon = false;					
	bool gameLost = false;
	bool newGame;

	TTF_Font * font;						// SDL TTF library stuff
	SDL_Color color;
	SDL_Surface * messageSurface;
	SDL_Texture * messageTexture;
	SDL_Rect messageRect;
	char message[100];

public:
    App();						// Default constructor, defined in App.cpp
    Uint32 time_left(void);		// Used as argument for SDL_Delay in OnRender.cpp
    int OnExecute();			// Executes the app
	void DisplayGameStats(int x, int y, char* formattedString, int number); // Converts information into printed strings
	void MoveSprites();			// Sets sprite postiions & renders them to screen
	void PrintGameStats();		// Calls 'DisplayGameStats()' for each printed line of stats
	bool CollisionCheck(Player* d, Object* p); // Check for collision between Object and scrolling objects
	
    bool OnInit();				// Game loop
    void OnEvent(SDL_Event* Event);
    void OnLoop();
    void OnRender();
    void OnCleanup();
};

#endif
