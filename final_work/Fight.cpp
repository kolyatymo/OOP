#include "Fight.h"

void Fight::fight(Hero& hero, Enemy& enemy)
{
	cout << "You are in fight with weak enemy" << endl;
	while(hero.Alive() and enemy.Alive())
	{
		cout << "-------- Hero --------" << endl;
		cout << "Hero hp --> " << hero.getHp() << endl;
		cout << "Hero damage --> " << hero.getDamage() << endl;
		cout << "----------------------------------\n" << endl;
		//cout << "--------------- Enemy -------------" << endl;
		cout << "-------- " << enemy.getName() << " ---------" << endl;
		cout << "Enemy hp --> " << enemy.getHp() << endl;
		cout << "Enemy damage --> " << enemy.getDamage() << endl;
		cout << "----------------------------------\n" << endl;


		cout << "Atack --> 1, Heal --> 2" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			hero.attack(enemy);
			if (enemy.Alive())
			{
				enemy.attack(hero);
			}
			break;
		}
		case 2:
		{
			if(hero.getHeals() > 0)
			{
				hero.heal(20);
				hero.setHeals(hero.getHeals() - 1);
				cout << "You have " << hero.getHp() << endl;
				if (enemy.Alive())
					enemy.attack(hero);
			}
			else
			{
				cout << "You have no heals!" << endl;
				if (enemy.Alive())
					enemy.attack(hero);
			}
				break;
		}
		}
	}

	if (hero.Alive())
	{
		cout << "You win!" << endl;
		cout << "Reward --> " << enemy.getReward() << endl;
		hero.setReward(hero.getReward() + enemy.getReward());
	}
	else
	{
		cout << "You lose!" << endl;
		hero.setDiamont(0);
		hero.setGold(0);
		hero.setShield(0);
		hero.setHeals(0);
		hero.setReward(0);
		hero.setWood(0);
		hero.setStone(0);
	}
}

