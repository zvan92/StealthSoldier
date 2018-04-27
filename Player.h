//==============================================================================
// Player.h
//==============================================================================
#ifndef PLAYER_H
#define PLAYER_H
//==============================================================================
#include "Object.h"
//==============================================================================

class Player : public Object
{
public:
	Player(char image[] = "", int x = 0, int y = 0, int vx = 0, int vy = 0)
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
