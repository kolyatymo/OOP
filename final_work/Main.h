#pragma once
#include <iostream>
using namespace std;

class Main
{
protected:
	string name;
	size_t hp;
	size_t damage;
	bool alive = true;
public:
	Main(const string& name, const size_t& hp, const size_t& damage)
	{
		this->name = name;
		this->hp = hp;
		this->damage = damage;
	}

	void setDamage(const size_t& damage)
	{
		this->damage = damage;
	}

	size_t getDamage() const
	{
		return damage;
	}

	void setName(const string& name)
	{
		this->name = name;
	}

	string getName() const
	{
		return name;
	}

	virtual void attack(Main& attack)
	{
		attack.takeDamage(getDamage());
	}

	void takeDamage(size_t dmg)
	{
		if (hp > dmg)
			hp -= dmg;
		else
		{
			hp = 0;
			alive = false;
		}
	}

	void heal(size_t amount)
	{
		hp += amount;
	}


	bool Alive() const
	{
		return alive && hp > 0;
	}

	void setAlive(bool state)
	{
		alive = state;
	}

	int getHp()
	{
		return hp;
	}
};

