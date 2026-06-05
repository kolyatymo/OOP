#pragma once
#include "Hero.h"
#include "ExceptionShop.h"
#include <conio.h>

enum KeyCode
{
    ENTER = 13, ESC = 27
};

enum Damge
{
    DamageWoodSword = 5, DamageStoneSword = 10, DamageGoldSword = 15, DamageDiamontSword = 20, DamageHeals = 0
};

class Shop
{
public:
    void ByWoodSword(Hero& hero)
    {
        size_t woods = 20;
        if (hero.getWood() < woods)
        {
            cout << "You don't have enough " << woods - hero.getWood() << " woods to buy a wood sword!!!" << endl;
        }
        else
        {
            hero.setWood(hero.getWood() - woods);
            
            Item woodSword("wood sword", DamageWoodSword, DamageHeals);

            hero.AddItem(woodSword);

            cout << "You bought a wooden sword" << endl;
            
        }
    }
    void ByStoneSword(Hero& hero)
    {
        size_t stone = 20;
        if (hero.getStone() < stone)
        {
            cout << "You don't have enough " << stone - hero.getStone() << " stones to buy a stone sword!!!" << endl;
        }
        else
        {
            hero.setStone(hero.getStone() - stone);

            Item stoneSword("stone sword", DamageStoneSword, DamageHeals);

            hero.AddItem(stoneSword);

            cout << "You bought a stoned sword" << endl;

        }
    }
    
    void ByGoldSword(Hero& hero)
    {
        size_t gold = 15;
        if (hero.getGold() < gold)
        {
            cout << "You don't have enough " << gold - hero.getGold() << " golds to buy a gold sword!!!" << endl;
        }
        else
        {
            hero.setGold(hero.getGold() - gold);

            Item goldSword("gold sword", DamageGoldSword, DamageHeals);

            hero.AddItem(goldSword);

            cout << "You bought a golden sword" << endl;

        }
    }
    
    void ByDiamontSword(Hero& hero)
    {
        size_t diamont = 10;
        if (hero.getDiamont() < diamont)
        {
            cout << "You don't have enough " << diamont - hero.getDiamont() << " diamonts to buy a diamont sword!!!" << endl;
        }
        else
        {
            hero.setDiamont(hero.getDiamont() - diamont);

            Item diamontSword("diamont sword", DamageDiamontSword, DamageHeals);

            hero.AddItem(diamontSword);

            cout << "You bought a diamomt sword" << endl;

        }
    }

    void ByHeals(Hero& hero)
    {
        size_t coin = 5;
        if (hero.getReward() < coin)
        {
            cout << "You don't have enough " << coin - hero.getReward() << " coins to buy a heals!!!" << endl;
        }
        else
        {
            hero.setReward(hero.getReward() - coin);
            hero.setHeals(hero.getHeals() + 1);

            cout << "+1 heals" << endl;
        } 
    }

    void repairShield(Hero& hero)
    {
        int n;
        cout << "repair shield by 50%  = (10 coins) --> 1" << endl;
        cout << "repair shield by 100% = (15 coins) --> 2" << endl;
        cin >> n;
        size_t coinBy50 = 10;
        size_t coinBy100 = 15;
        if (n == 1)
        {
            if (hero.getReward() < coinBy50)
            {
                cout << "You don't have enough " << coinBy50 - hero.getReward() << " coins to buy a shield 50%!!!" << endl;
            }
            else
            {
                hero.setReward(hero.getReward() - coinBy50);
                hero.setShield(50);
            }
        }
        else if (n == 2)
        {
            if (hero.getReward() < coinBy100)
            {
                cout << "You don't have enough " << coinBy100 - hero.getReward() << " coins to buy a shield 100%!!!" << endl;
            }
            else
            {
                hero.setReward(hero.getReward() - coinBy100);
                hero.setShield(100);
            }
        }
    }

    void Exchange(Hero& hero)
    {
        int n;
        cout << "Coins for resources --> 1" << endl;
        cout << "Resources for coins --> 2" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            int number;
            cout << "(1) --> 1 coins --> 1 wood\n"
                << "(2) --> 2 coins --> 1 stone\n"
                << "(3) --> 4 coins --> 1 gold\n"
                << "(4) --> 6 coins --> 1 diamont" << endl;
            cin >> number;
            switch (number)
            {
            case 1:
            {
                cout << "Enter the number of coins you want to exchange for wood --> ";
                size_t coins;
                cin >> coins;
                if (hero.getReward() < coins)
                {
                    cout << "You don't have enough " << coins - hero.getReward() << " coins to exchange for wood!!!" << endl;
                    break;
                }
                cout << "press ENTER to exchange (" << coins << ") coins for (" << coins << ") trees?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setReward(hero.getReward() - coins);
                        hero.setWood(hero.getWood() + coins);

                        cout << "You exchanged " << coins << " coins for " << coins << " trees" << endl;
              
                        break;      
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;
            case 2:
            {
                size_t coins;
                while (true)
                {
                    try
                    {
                        cout << "Enter the number of coins you want to exchange for stone --> ";
                        cin >> coins;
                        if (hero.getReward() < coins)
                        {
                            cout << "You don't have enough " << coins - hero.getReward() << " coins to exchange for stone!!!" << endl;
                            continue;
                        }
                        else if (coins % 2 != 0)
                        {
                            throw NegativeExchangeCoinINStone();
                        }
                        break;
                    }
					catch (const NegativeExchangeCoinINStone& ex)
					{
						cout << ex.what() << endl;
					}
                }
                cout << "press ENTER to exchange (" << coins << ") coins for (" << coins / 2 << ") stones?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setReward(hero.getReward() - coins);
                        hero.setStone(hero.getStone() + coins / 2);

                        cout << "You exchanged " << coins << " coins for " << coins / 2 << " stones" << endl;

                        break;
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;
            }
            case 3:
            {
                size_t coins;
                while (true)
                {
                    try
                    {
                        cout << "Enter the number of coins you want to exchange for gold --> ";
                        cin >> coins;
                        if (hero.getReward() < coins)
                        {
                            cout << "You don't have enough " << coins - hero.getReward() << " coins to exchange for gold!!!" << endl;
                            continue;
                        }
                        else if (coins % 4 != 0)
                        {
                            throw NegativeExchangeCoinINGold();
                        }
                        break;
                    }
                    catch (const NegativeExchangeCoinINGold& ex)
                        {
						cout << ex.what() << endl;
					}
                }
                cout << "press ENTER to exchange (" << coins << ") coins for (" << coins / 4 << ") golds?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setReward(hero.getReward() - coins);
                        hero.setGold(hero.getGold() + coins / 4);

                        cout << "You exchanged " << coins << " coins for " << coins / 4 << " golds" << endl;

                        break;
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;               
            }
            case 4:
            {
                size_t coins;
                while (true)
                {
                    try
                    {
                        cout << "Enter the number of coins you want to exchange for diamont --> ";
                        cin >> coins;
                        if (hero.getReward() < coins)
                        {
                            cout << "You don't have enough " << coins - hero.getReward() << " coins to exchange for diamont!!!" << endl;
                            continue;
                        }
                        else if (coins % 6 != 0)
                        {
                            throw NegativeExchangeCoinINDiamont();
                        }
                        break;
                    }
                    catch (const NegativeExchangeCoinINDiamont& ex)
                    {
                        cout << ex.what() << endl;
                    }
                }
                cout << "press ENTER to exchange (" << coins << ") coins for (" << coins / 6 << ") diamonts?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setReward(hero.getReward() - coins);
                        hero.setGold(hero.getGold() + coins / 6);

                        cout << "You exchanged " << coins << " coins for " << coins / 6 << " diamonts" << endl;

                        break;
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;              
            }
            }
            break;
            }
        }
        break;
        case 2:
        {
            int number;
            cout << "(1) --> 2 wood    --> 1 coin\n"
                << "(2) --> 1 stone   --> 1 coins\n"
                << "(3) --> 1 gold    --> 2 coins\n"
                << "(4) --> 1 diamont --> 3 coins" << endl;
            cin >> number;
            switch (number)
            {
            case 1:
            {
                size_t woods;
                while (true)
                {
                    try
                    {
                        cout << "Enter the number of wood you want to exchange for coins --> ";
                        cin >> woods;
                        if (hero.getWood() < woods)
                        {
                            cout << "You don't have enough " << woods - hero.getWood() << " woods to exchange for coins!!!" << endl;
                            continue;
                        }
                        else if (woods % 2 != 0)
                        {
                            throw NegativeExchangeWoodINCoin();
                        }
                        break;
                    }
                    catch (const NegativeExchangeWoodINCoin& ex)
					{
						cout << ex.what() << endl;
					}
                }
                cout << "press ENTER to exchange (" << woods << ") woods for (" << woods / 2 << ") coins?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setWood(hero.getWood() - woods);
                        hero.setReward(hero.getReward() + woods / 2);
                    
                        cout << "You exchanged " << woods << " woods for " << woods / 2 << " coins" << endl;

                        break;
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;
            }
            case 2:
            {
                size_t stones;
                cout << "Enter the number of stone you want to exchange for coins --> ";
                cin >> stones;
                if (hero.getStone() < stones)
                {
                    cout << "You don't have enough " << stones - hero.getStone() << " stones to exchange forcoins!!!"<<endl;
                }
                
                cout << "press ENTER to exchange (" << stones << ") stones for (" << stones << ") coins?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setStone(hero.getStone() - stones);
                        hero.setReward(hero.getReward() + stones);

                        cout << "You exchanged " << stones << " stones for " << stones << " coins" << endl;

                        break;
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;
               
            }
            case 3:
            {
                cout << "Enter the number of gold you want to exchange for coins --> ";
                size_t golds;
                cin >> golds;
                if (hero.getGold() < golds)
                {
                    cout << "You don't have enough " << golds - hero.getGold() << " golds to exchange for coins!!!" << endl;
                }
                cout << "press ENTER to exchange (" << golds << ") golds for (" << golds * 2 << ") coins?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setGold(hero.getGold() - golds);
                        hero.setReward(hero.getReward() + golds * 2);

                        cout << "You exchanged " << golds << " golds for " << golds * 2 << " coins" << endl;

                        break;
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;
                
            }
            case 4:
            {
                cout << "Enter the number of diamonts you want to exchange for coins --> ";
                size_t diamonts;
                cin >> diamonts;
                if (hero.getDiamont() < diamonts)
                {
                    cout << "You don't have enough " << diamonts - hero.getDiamont() << " diamonts to exchange for coins!!!" << endl;
                }
                cout << "press ENTER to exchange (" << diamonts << ") diamonts for (" << diamonts * 3 << ") coins?" << endl;
                cout << "!!! (if not press ESC) !!!" << endl;

                int key;

                while (true)
                {
                    key = _getch();
                    system("cls");

                    if (key == ESC)
                        break;

                    if (key == ENTER)
                    {
                        hero.setDiamont(hero.getDiamont() - diamonts);
                        hero.setReward(hero.getReward() + diamonts * 3);

                        cout << "You exchanged " << diamonts << " diamonts for " << diamonts * 3 << " coins" << endl;

                        break;
                    }
                    else
                    {
                        cout << "------------------------- !!!" << endl;
                        cout << "press ENTER to buy\nor ESC for excellent" << endl;
                        cout << "--------------------------!!!" << endl;

                    }
                }
                break;
            }
            break;
            }
        }
        }
    }
};
