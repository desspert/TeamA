#include "Map.h"


Map::Map(){
    
    map_list[0] = std::ifstream("res/map1.txt");
    map_list[1] = std::ifstream("res/map1.txt");
    map_list[2] = std::ifstream("res/map1.txt");
    map_list[3] = std::ifstream("res/map1.txt");

    for (int y = 0; y < MAP_HEIGHT; y++)
    {
        for (int x = 0; x < MAP_WIDTH; x++)
        {
            map_list[0] >> map_chip[y][x];
            if (map_chip[y][x] == 2){
                pos = Vec2f(-BLOCK_SIZE / 2 + x*BLOCK_SIZE, BLOCK_SIZE / 2 - y*BLOCK_SIZE);
            }
        }
    }
    direction = 0;
    speed = 20;
}


void Map::Update(Player player){
    Move(player.Direction());
    DirectionBlock();

    
}

void Map::Draw(){
    
    for (int y = 0; y < MAP_HEIGHT; y++)
    {
        for (int x = 0; x < MAP_WIDTH; x++)
        {
            Vec2f map_pos = Vec2f(-BLOCK_SIZE / 2 + x*BLOCK_SIZE, BLOCK_SIZE / 2 - y*BLOCK_SIZE)-pos;


            switch (map_chip[y][x])
            {
            case 1:
                //std::cout << map_pos << std::endl;
                drawFillBox(map_pos.x() - BLOCK_SIZE / 2, map_pos.y() - BLOCK_SIZE / 2, 200, 200, Color::cyan);
                break;
            }

        }
    }
    

    //drawFillBox(-100, -100, 200, 200, Color::blue);
}

void Map::Move(int direction){
    switch (direction)
    {
    case DIRECTION_UP:
        pos.y() += speed;
        break;
    case DIRECTION_DOWN:
        pos.y() -= speed;
        break;
    case DIRECTION_LEFT:
        pos.x() -= speed;
        break;
    case DIRECTION_RIGHT:
        pos.x() += speed;
        break;
    }
}

char Map::UpBlock(){
    return up_block;
}
char Map::DownBlock(){
    return down_block;
}
char Map::LeftBlock(){
    return left_block;
}
char Map::RightBlock(){
    return right_block;
}

void Map::DirectionBlock()
{
    up_block = 0;
    down_block = 0;
    left_block = 0;
    right_block = 0;

    for (int y = 0; y < MAP_HEIGHT; y++)
    {
        for (int x = 0; x < MAP_WIDTH; x++)
        {
            Vec2f map_pos = Vec2f(-BLOCK_SIZE / 2 + x*BLOCK_SIZE, BLOCK_SIZE / 2 - y*BLOCK_SIZE) - pos;
            if (collision2(pos, map_pos, Vec2f(BLOCK_SIZE, BLOCK_SIZE))){
                up_block = map_chip[y + 1][x];
                down_block = map_chip[y - 1][x];
                left_block = map_chip[y][x-1];
                right_block = map_chip[y][x+1];
            }
            
        }
    }
    
}

void Map::HitBlock(Vec2f size){

    up_hit = 0;
    down_hit = 0;
    left_hit = 0;
    right_hit = 0;

    for (int y = 0; y < MAP_HEIGHT; y++)
    {
        for (int x = 0; x < MAP_WIDTH; x++)
        {
            Vec2f map_pos = Vec2f(-BLOCK_SIZE / 2 + x*BLOCK_SIZE, BLOCK_SIZE / 2 - y*BLOCK_SIZE) - pos;
            if (collision2(pos+Vec2f( 0,size.y()/2), map_pos, Vec2f(BLOCK_SIZE, BLOCK_SIZE))){
                up_block = map_chip[y + 1][x];
                down_block = map_chip[y - 1][x];
                left_block = map_chip[y][x - 1];
                right_block = map_chip[y][x + 1];
            }

        }
    }

    
}


bool Map::UpHit(){
    return up_hit;
}
bool Map::DownHit(){
    return down_hit;
}
bool Map::LeftHit(){
    return left_hit;
}
bool Map::RightHit(){
    return right_hit;
}

