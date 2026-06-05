#include <iostream>
#include "Main.h"
#include "Hero.h"
#include "Item.h"
#include "Shop.h"



int main()
{
    

     //Hero hero;
     //Shop shop;

     //hero.setWood(30);
     //hero.setStone(25);
     //hero.setGold(20);
     //hero.setDiamont(15);
     //hero.setReward(30);

     //hero.Inventory();

     ///*shop.ByWoodSword(hero);
     //shop.ByStoneSword(hero);
     //shop.ByGoldSword(hero);
     //shop.ByDiamontSword(hero);
     //shop.repairShield(hero);*/

     ////shop.ByHeals(hero);

     ////hero.Inventory();

     //shop.Exchange(hero);

     //hero.Inventory();



    Hero hero;
    Shop shop;

    hero.setWood(50);
    hero.setStone(35);
    hero.setGold(30);
    hero.setDiamont(20);
    hero.setReward(50);

    int choice;

    while (true)
    {


        cout << "\n========== GAME MENU ==========\n";
        cout << "1 --> Show inventory\n";
        cout << "2 --> Buy wooden sword\n";
        cout << "3 --> Buy stone sword\n";
        cout << "4 --> Buy gold sword\n";
        cout << "5 --> Buy diamond sword\n";
        cout << "6 --> Buy heals\n";
        cout << "7 --> Repair shield\n";
        cout << "8 --> Exchange resources\n";
        cout << "9 --> Show HP\n";
        cout << "================================\n";
        cout << "Choose --> ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            hero.Inventory();
            break;

        case 2:
            shop.ByWoodSword(hero);
            break;

        case 3:
            shop.ByStoneSword(hero);
            break;

        case 4:
            shop.ByGoldSword(hero);
            break;

        case 5:
            shop.ByDiamontSword(hero);
            break;

        case 6:
            shop.ByHeals(hero);
            break;

        case 7:
            shop.repairShield(hero);
            break;

        case 8:
            shop.Exchange(hero);
            break;

        case 9:
            cout << "HP --> " << hero.getHp() << endl;
            break;
        }
    }
}

