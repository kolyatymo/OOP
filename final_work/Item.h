#pragma once
#include <iostream>
using namespace std;

class Item
{
	string name;
	size_t damageBonus;
	size_t hpBonus;
public:
	Item(const string& name, const size_t& damageBonus = 0, const size_t& hpBonus = 0)
	{
		this->name = name;
		this->damageBonus = damageBonus;
		this->hpBonus = hpBonus;
	}

	const string& getName() const
	{
		return name;
	}
	const size_t& getdamageBonus() const
	{
		return damageBonus;
	}
	const size_t& gethpBonus() const
	{
		return hpBonus;
	}
};

