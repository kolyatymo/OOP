#pragma once
#include "Enemy.h"
class weakEnemies :
    public Enemy
{
public:
	weakEnemies()
		:Enemy("Mob", 30, 5, 10){}
};

