#pragma once
#include "lib\framework.hpp"

struct Box{
	Vec2f pos;
	Vec2f size;
};

enum 
{
	DIRECTION_UP,
	DIRECTION_DOWN,
	DIRECTION_LEFT,
	DIRECTION_RIGHT
};