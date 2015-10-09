#pragma once
#include "lib/framework.hpp"
#define WIDTH (2600)
#define HEIGHT (2000)
#define ENV App::Get()

class App{
private:

public:

	static AppEnv& Get(){
		static AppEnv Env(2600, 2000,false,true);
		return Env;
	}
	
};