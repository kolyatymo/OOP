#pragma once
#include "Main.h"
class Enemy :
    public Main
{
protected:
    size_t reward;
public:
	Enemy(const string& name, const size_t& hp, const size_t& damage, const size_t& reward)
		:Main(name, hp, damage)
	{
		this->reward = reward;
	}
	size_t getReward()
	{
		return reward;
	}
};

