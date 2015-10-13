#pragma once
#include "lib/framework.hpp"
#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Singleton.h"

class GameMain
{
public:

    Map map;
    Player player;


    //GameMain();

    void Update();
    void Draw();

    
private:

};




