#pragma once
#include "lib/framework.hpp"
#include <iostream>
#include "Singleton.h"
#include "Player.h"
#include "Struct.h"
#include "Collision.h"

enum MAP{
    BLOCK_SIZE = 200,
    MAP_WIDTH = 32,
    MAP_HEIGHT = 64

};
 
class Player;

class Map
{
public:
    Map();
    
    
    void Update();
    void Draw();

    char UpBlock();
    char DownBlock();
    char LeftBlock();
    char RightBlock();

    bool UpHit();
    bool DownHit();
    bool LeftHit();
    bool RightHit();

    void setter(int player_direction);
    void Move(int direction);
    void DirectionBlock();


private:
    
    Vec2f pos;
    int direction;
    std::ifstream map_list[4];
    int map_chip[MAP_HEIGHT][MAP_WIDTH];
    int speed;

    char up_block;
    char down_block;
    char left_block;
    char right_block;

    bool up_hit;
    bool down_hit;
    bool left_hit;
    bool right_hit;

    void HitBlock(Vec2f size);

    int player_direction;

};
