#pragma once
#include "lib/framework.hpp"
#include "Singleton.h"
#include "Struct.h"
#include "Map.h" 

class Player{
private:
	Vec2f pos;
	Vec2f size;
	int direction;
	float angle;
	Texture tx = Texture("res/MY_CAR.png");
public:
	Player();
	Vec2f GetPos();
	Vec2f GetSize();
	Vec2f GetCenterPos();
	void ChangeAngle(char up_block, char down_block, char left_block, char right_block);
	int Direction();
	void Move();
	
	void Smoke();
	void Update();
	void Draw();
};