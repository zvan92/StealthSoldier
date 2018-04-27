/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// Object.h
//==============================================================================
#ifndef OBJECT_H
#define OBJECT_H
//==============================================================================
#include <SDL.h>
#include <cstring>
#include <stdlib.h>
#include <cstdio>
//==============================================================================
#include "mywindow.h"
//==============================================================================

/* Implement a sprite as a Object.... */
class Object
{
public:
	bool loaded;
    SDL_Rect position;
    SDL_Rect velocity;
    char imagename[255];

	Object(char image[] = "", int x = 0, int y = 0, int vx = 0, int vy = 0)
	{
		strncpy_s(imagename, image, 255);
		position.x = x;
		position.y = y;
		velocity.x = vx;
		velocity.y = vy;
		loaded = false;
	}
        
	int loadObject(SDL_Renderer *prenderer);
	void display(SDL_Renderer *prenderer);
	void move();
protected:
	SDL_Texture *texture;
};

#endif
