//==============================================================================
// Screen.h
//
// The Object ship object class
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