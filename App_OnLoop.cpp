//==============================================================================
// App_OnLoop.cpp
//==============================================================================
#include "App.h"
//==============================================================================

void App::MoveSprites()
{
	if (newGame == true)
	{
		for (int i = 0; i < NUM_MINES; i++)
		{
			mines[i].position.x = (0 - mines[i].position.w);
			mines[i].position.y = 0;
		}
		newGame = false;
	}

	for (int i = 0; i < NUM_TANKS; ++i)
	{
		if (CollisionCheck(&soldier, &tanks[i]))					// Object hit by tanks
		{
			Mix_PlayChannel(1, gMine, 0); // play collision sound
			soldier.position.x = 0; // return Object to spawn
			soldier.position.y = (window_h - soldier.position.h);
		}

		if (tanks[i].position.x < (0 - tanks[i].position.w))		// tanks leave window
		{
			tanks[i].position.x = window_w;	// return tank to spawn
		}
		
		tanks[i].move(); // apply new positions
		tanks[i].display(renderer); // render to screen
	}
	
	for (int i = 0; i < NUM_TRANSPORTS; ++i)
	{
		if (CollisionCheck(&soldier, &transports[i]))				// Object hit by transports
		{
			Mix_PlayChannel(1, gMine, 0);
			soldier.position.x = 0;
			soldier.position.y = (window_h - soldier.position.h);
		}

		if (transports[i].position.x > window_w)					// transports leave window
		{
			transports[i].position.x = (0 - transports[i].position.w);
		}

		transports[i].move();
		transports[i].display(renderer);
	}

	if (soldier.position.x == 200 && soldier.position.y == 700)		// Object hits mine [0]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[0].position.x = 200;		// render explosion
		mines[0].position.y = 700;
		numberOfLives--;				// take away a life
		soldier.position.x = 0;			// return Object to spawn
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 200 && soldier.position.y == 500)		// Object hits mine [1]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[1].position.x = 200;
		mines[1].position.y = 500;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 0 && soldier.position.y == 500)		// Object hits mine [2]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[2].position.x = 0;
		mines[2].position.y = 500;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 500 && soldier.position.y == 600)		// Object hits mine [3]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[3].position.x = 500;
		mines[3].position.y = 600;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 700 && soldier.position.y == 700)		// Object hits mine [4]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[4].position.x = 700;
		mines[4].position.y = 700;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 100 && soldier.position.y == 700)		// Object hits mine [5]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[5].position.x = 100;
		mines[5].position.y = 700;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 300 && soldier.position.y == 500)		// Object hits mine [6]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[6].position.x = 300;
		mines[6].position.y = 500;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 400 && soldier.position.y == 600)		// Object hits mine [7]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[7].position.x = 400;
		mines[7].position.y = 600;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 700 && soldier.position.y == 500)		// Object hits mine [8]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[8].position.x = 700;
		mines[8].position.y = 500;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 400 && soldier.position.y == 500)		// Object hits mine [9]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[9].position.x = 400;
		mines[9].position.y = 500;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 0 && soldier.position.y == 100)		// Object hits mine [10]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[10].position.x = 0;
		mines[10].position.y = 100;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 200 && soldier.position.y == 100)		// Object hits mine [11]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[11].position.x = 200;
		mines[11].position.y = 100;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 300 && soldier.position.y == 100)		// Object hits mine [12]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[12].position.x = 300;
		mines[12].position.y = 100;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 500 && soldier.position.y == 100)		// Object hits mine [13]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[13].position.x = 500;
		mines[13].position.y = 100;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 700 && soldier.position.y == 100)		// Object hits mine [14]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[14].position.x = 700;
		mines[14].position.y = 100;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}
	if (soldier.position.x == 100 && soldier.position.y == 100)		// Object hits mine [15]
	{
		Mix_PlayChannel(1, gMine, 0);
		mines[15].position.x = 100;
		mines[15].position.y = 100;
		numberOfLives--;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}

	if (soldier.position.y == 0)									// Object reaches goal
	{
		Mix_PlayChannel(1, gWin, 0);
		gameLost = false;
		gameWon = true;
		gameOver = true;
		soldier.position.x = 0;
		soldier.position.y = (window_h - soldier.position.h);
	}

	for (int i = 0; i < NUM_MINES; i++)
	{
		mines[i].display(renderer);									// render exploded mines
	}
}

//==============================================================================
bool App::CollisionCheck(Player* d, Object* p)
{
	// Check for x-axis collision between both objects
	if ((d->position.x > p->position.x && d->position.x < (p->position.x + p->position.w)) ||
		((d->position.x + d->position.w) > p->position.x && (d->position.x + d->position.w) < (p->position.x + p->position.w))) 
	{
		// If colliding on x-axis, check for y-axis collision
		if ((d->position.y > p->position.y && d->position.y < (p->position.y + p->position.h)) ||
			((d->position.y + d->position.h) > p->position.y && (d->position.y + d->position.h) < (p->position.y + p->position.h))) 
		{
			// If colliding
			numberOfLives -= 1;
			return true;
		}
	}
	// If not colliding
	return false;
}

//==============================================================================
void App::DisplayGameStats(int x, int y, char* formattedString, int number)
{
	sprintf_s(message, formattedString, number);	 							//convert number to string, insert into formatted string
	messageSurface = TTF_RenderText_Solid(font, message, color);				//make text an image (an SDL_Surface)
	messageTexture = SDL_CreateTextureFromSurface(renderer, messageSurface);	//convert SDL_Surface to SDL_Texture

	int texW = 0;
	int texH = 0;
	SDL_QueryTexture(messageTexture, NULL, NULL, &texW, &texH);					//get width & height of texture
	messageRect = { x, y, texW, texH };											//create a SDL_Rect for the message

	SDL_RenderCopy(renderer, messageTexture, NULL, &messageRect);				//copy to renderer

	SDL_DestroyTexture(messageTexture);
	SDL_FreeSurface(messageSurface);
}

//==============================================================================
void App::PrintGameStats()
{
	if (introScreen)
	{
		DisplayGameStats(10, 10, "Press 'ENTER' to play", NULL);				// intro screen text
		DisplayGameStats(10, 35, "Press 'ESC' to quit", NULL);
	}
	
	if (!introScreen)
	{
		if (gameOver == false)
		{
			DisplayGameStats(10, 10, "LIVES: %2d", numberOfLives);				// lives count
			DisplayGameStats(530, 10, "[Arrow keys to move]", NULL);			// movement instructions
			DisplayGameStats(595, 35, "['ESC' to quit]", NULL);					// quit instructions
		}
		if (gameOver == true)
		{
			DisplayGameStats(10, 10, "Press 'ESC' to quit", NULL);				// 'game over' text
			DisplayGameStats(10, 35, "Press 'ENTER' to play again", NULL);
		}
	}
}

//==============================================================================
void App::OnLoop()
{
    SDL_SetRenderDrawColor(renderer, 0xA0, 0xA0, 0xA0, 0xFF);
    SDL_RenderClear(renderer);

	if (introScreen)								// Display intro screen + reset stats
	{
		gameLost = false;
		gameWon = false;
		gameOver = false;
		newGame = true;
		numberOfLives = 5;
		introscreen.display(renderer);
	}

	if (gameOver)
	{
		numberOfLives = 0;

		if (gameLost)
		{
			gameoverscreen.display(renderer);		// Display 'you died' screen
		}
		if (gameWon)
		{
			winscreen.display(renderer);			// Display 'you win' screen
		}
	}

	if (!introScreen && !gameOver)
	{
		if (numberOfLives > 0)
		{
			background.display(renderer);		// Render background to the screen
			soldier.display(renderer);			// Render Object to the screen
			MoveSprites();						// Change position of sprites and render them
		}
		if (numberOfLives == 0)
		{
			Mix_PlayChannel(1, gLose, 0);
			gameLost = true;
			gameWon = false;
			gameOver = true;
		}
	}

	PrintGameStats();							// Print game stats
}
