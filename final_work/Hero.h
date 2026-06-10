#pragma once
#include <vector>
#include "Main.h"
#include "Item.h"

class Hero : public Main
{
private:
	size_t wood;
	size_t stone;
	size_t gold;
	size_t diamont;
	int x, y;

	size_t step;

	size_t heals;
	size_t shield;
	size_t reward;
	vector<Item> inventory;
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
		step = 0;
		x = 10;
		y = 19;
	}

	void setStep(const size_t& step)
	{
		this->step = step;
	}

	size_t& getStep()
	{
		return step;
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

	void AddItem(const Item& item)
	{
		inventory.push_back(item);
		damage += item.getdamageBonus();
		hp += item.gethpBonus();
	}
	 
	bool hasItem(const string& name)
	{
		for (auto& item : inventory)
		{
			if (item.getName() == name)
				return true;
		}
		return false;
	}

	void setWood(const size_t& wood)
	{
			this->wood = wood;
	}
	void setStone(const size_t& stone)
	{
		this->stone = stone;
	}
	void setGold(const size_t& gold)
	{
		this->gold = gold;
	}
	void setDiamont(const size_t& diamont)
	{
		this->diamont = diamont;
	}
	void setShield(const size_t& shiedl)
	{
		this->shield = shiedl;
	}
	void setHeals(const size_t& heals)
	{
		this->heals = heals;
	}
	void setReward(const size_t& reward)
	{
		this->reward = reward;
	}

	void addResurs()
	{
		if (step % 2 == 0)
			wood++;

		if (step % 4 == 0)
			stone++;

		if (step % 6 == 0)
			gold++;

		if (step % 8 == 0)
			diamont++;
	}


	const size_t& getWood()
	{
		return wood;
	}
	const size_t& getStone()
	{
		return stone;
	}
	const size_t& getGold()
	{
		return gold;
	}
	const size_t& getDiamont()
	{
		return diamont;
	}
	const size_t& getShield()
	{
		return shield;
	}
	const size_t& getHeals()
	{
		return heals;
	}
	const size_t& getReward()
	{
		return reward;
	}

	void Inventory() const
	{
		int n;
		cout << "-------- Inventory --------" << endl;
		cout << " 1 --> show resources"
			 << "\n 2 --> show items"
			 << "\n 3 --> show coins"
			 << "\n 4 --> show all" << endl;
		cin >> n;

		switch (n)
		{
		case 1:
		{
			cout << "-------- Inventory resources --------" << endl;
			cout << "Wood    --> " << wood << endl;
			cout << "Stone   --> " << stone << endl;
			cout << "Gold    --> " << gold << endl;
			cout << "Diamont --> " << diamont << endl;
			cout << "---------------------------" << endl;
			break;
		}
		case 2:
		{
			cout << "-------- Inventory items --------" << endl;
			for (auto& item : inventory)
			{
				cout << item.getName() << endl;
			}cout << endl;
			cout << "---------------------------" << endl;
			cout << "Shield --> " << shield << " %" << endl;
			cout << "---------------------------" << endl;
			cout << "Heals --> " << heals << endl;
			cout << "---------------------------" << endl;
			break;
		}
		case 3:
		{
			cout << "-------- Inventory coins --------" << endl;
			cout << "Coins --> " << reward << endl;
			cout << "---------------------------" << endl;
			break;
		}
		case 4:
		{
			cout << "-------- Inventory --------" << endl;
			cout << "Wood    --> " << wood << endl;
			cout << "Stone   --> " << stone << endl;
			cout << "Gold    --> " << gold << endl;
			cout << "Diamont --> " << diamont << endl;
			cout << "---------------------------" << endl;
			for (auto& item : inventory)
			{
				cout << item.getName() << endl;
			}cout << endl;
			cout << "Shield --> " << shield << " %" << endl;
			cout << "---------------------------" << endl;
			cout << "Heals --> " << heals << endl;
			cout << "---------------------------" << endl;
			cout << "Coins --> " << reward << endl;
			cout << "---------------------------" << endl;
			break;
		}
		}

	}

};

