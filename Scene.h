#pragma once
#include "lib/framework.hpp"
#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Singleton.h"
#include "GameMain.h"


enum {
    TITLE,
    GAMEMAIN,
    RESULT
};


class Scene
{
public:
    //Title
    //Result
    GameMain gamemain;

    Scene();
    void Update();
    void Draw();


private:
    int scene;
};




