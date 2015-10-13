#include "lib/framework.hpp"
#include <iostream>
#include "Singleton.h"
#include "Scene.h"

int main() {

	
    ENV;
    
    Scene scene;

  while (ENV.isOpen()) {
       ENV.begin();
       

       
       scene.Update();
       scene.Draw();

      ENV.end();
  }
}
