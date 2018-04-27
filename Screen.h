/*
STEALTH SOLDIER, by Evan Sullivan
(https://github.com/zvan92)
for GAME203, semester #2 (2018)
(all images & music made by me)
*/

//==============================================================================
// Screen.h
//==============================================================================
#ifndef SCREEN_H
#define SCREEN_H
//==============================================================================
#include "Object.h"
//==============================================================================

class Screen : public Object
{
public:
	Screen(char image[] = "", int x = 0, int y = 0, int vx = 0, int vy = 0)
	{
		strncpy_s(imagename, image, 255);
		position.x = x;
		position.y = y;
		velocity.x = vx;
		velocity.y = vy;
		loaded = false;
	}
};

#endif
