#include "Game.h"

void Game::run()
{
    cout << "input ESC for MENU\nand arrows for GAME";

    maps.LoadLevel(level, hero, enemies, boss1, boss2, boss3, currentBoss);
    while (hero.Alive())
    {
        switch (state)
        {
        case MAP:
            input();
            update();
            render();
            break;

        case MENU:
            showMenu();
            state = MAP;
            break;
        }
    }
}

void Game::showMenu()
{
    int choice;

    cout << "\n========== GAME MENU ==========\n";
    cout << "1  --> Show inventory\n";
    cout << "2  --> Buy wooden sword\n";
    cout << "3  --> Buy stone sword\n";
    cout << "4  --> Buy gold sword\n";
    cout << "5  --> Buy diamond sword\n";
    cout << "6  --> Buy heals\n";
    cout << "7  --> Repair shield\n";
    cout << "8  --> Exchange resources\n";
    cout << "9  --> Show HP\n";
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

    state = MAP;
    
}


void Game::input()
{
    int keyR = _getch();

    if (keyR == 224)
        keyR = _getch();

    if (keyR == 27)
    {
        state = MENU;
        return;
    }

    switch (keyR)
    {
    case RIGHT:
        if (hero.getX() < 19)
        {
            hero.setX(hero.getX() + 1);
            hero.setStep(hero.getStep()+1);
            hero.addResurs();
        }
        break;

    case LEFT:
        if (hero.getX() > 0)
        {
            hero.setX(hero.getX() - 1);
            hero.setStep(hero.getStep()+1);
            hero.addResurs();
        }
        break;

    case UP:
        if (hero.getY() > 0)
        {
            hero.setY(hero.getY() - 1);
            hero.setStep(hero.getStep()+1);
            hero.addResurs();
        }
        break;

    case DOWN:
        if (hero.getY() < 19)
        {
            hero.setY(hero.getY() + 1);
            hero.setStep(hero.getStep() +1);
            hero.addResurs();
        }
        break;
    }
}

void Game::update()
{
    for (auto& enemy : enemies)
    {
        if (enemy.Alive() and hero.getX() == enemy.getX() and hero.getY() == enemy.getY())
        {
            fight.fight(hero, enemy);
        }
    }

    if (currentBoss and currentBoss->Alive() and hero.getX() == currentBoss->getX() and hero.getY() == currentBoss->getY())
    {
        fight.fight(hero, *currentBoss);
    }

    if (currentBoss and !currentBoss->Alive())
    {
        level++;
        if (level > 3)
        {
            state = MENU;
            return;
        }
        cout << "LEVEL UP" << endl;

        maps.LoadLevel(level, hero, enemies, boss1, boss2, boss3, currentBoss);
    }
}

void Game::render()
{
    system("cls");

    maps.updateMap(hero, enemies, boss1, boss2, boss3);
    maps.DrawMap();
}

