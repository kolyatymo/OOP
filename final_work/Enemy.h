#pragma once
#include "Main.h"
class Enemy : public Main
{
protected:
    size_t reward;
	int x, y;
public:
	Enemy()
		:Main("Enemy", 50, 5), reward(10), x(7), y(19){}

	Enemy(const string& name, const size_t& hp, const size_t& damage, const size_t& reward, int x = 0, int y = 0)
		:Main(name, hp, damage)
	{
		this->reward = reward;
		this->x = x;
		this->y = y;
	}

	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}

	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}

	size_t getReward()
	{
		return reward;
	}
};

