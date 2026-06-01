#pragma once
#include <iostream>
using namespace std;

class Main
{
protected:
	string name;
	size_t hp;
	size_t damage;
public:
	Main(const string& name, const size_t& hp, const size_t& damage)
	{
		this->name = name;
		this->hp = hp;
		this->damage = damage;
	}

	virtual void attack(Main& attack)
	{
		attack.hp -= damage;
	}

	bool Alive()
	{
		return hp > 0;
	}
	int getHp()
	{
		return hp;
	}
};

