#pragma once
#include "Main.h"

class Hero : public Main
{
private:
	size_t wood;
	size_t stone;
	size_t gold;
	size_t diamont;

	size_t heals;
	size_t shield;
	size_t reward;
public:
	Hero()
		:Main("Hero", 100, 15)
	{
		wood = 0;
		stone = 0;
		gold = 0;
		diamont = 0;
		shield = 0;
		heals = 10;
		reward = 0;
	}

};

