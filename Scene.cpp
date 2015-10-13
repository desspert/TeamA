#include "Scene.h"



Scene::Scene()
{
    scene = GAMEMAIN;
}

void Scene::Update(){
    switch (scene)
    {
    case TITLE:
        break;
    case GAMEMAIN:
        
        gamemain.Update();
        break;
    case RESULT:
        break;

    }

}
void Scene::Draw(){

    switch (scene)
    {
    case TITLE:
        break;
    case GAMEMAIN:
        
        gamemain.Draw();


        break;
    case RESULT:
        break;

    }

}
