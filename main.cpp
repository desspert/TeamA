#include "lib/framework.hpp"
#include <iostream>
#include "Singleton.h"
#include "Map.h"
#include "Player.h"

int main() {

	
    ENV;
    Player player;
    Map map;
    

  while (ENV.isOpen()) {
       ENV.begin();
       

       
       map.Update(player);
       map.Draw();
       player.Update();
       player.Draw();

       

      ENV.end();
  }
}
