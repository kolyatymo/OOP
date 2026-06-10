#pragma once
#include <array>
#include <iostream>
#include "Hero.h"
#include "Enemy.h"
#include <vector>


class Maps
{
private:
    static const int ROW = 20, COL = 20;
    char map[ROW][COL];
public:
    Maps()
    {
        for (size_t i = 0; i < ROW; i++)
        {
            for (size_t j = 0; j < COL; j++)
            {
                map[i][j] = '.';
            }
        }
    }

    void DrawMap()
    {
        for (size_t i = 0; i < ROW; i++)
        {
            for (size_t j = 0; j < COL; j++)
            {
                cout << map[i][j] << ' ';
            }
            cout << endl;
        }
    }


    void updateMap(Hero& hero, vector<Enemy>& enemies, BoslvlOne& boss1, BoslvlTwo& boss2, BoslvlThree& boss3)
    {
        for (int i = 0; i < ROW; i++)
            for (int j = 0; j < COL; j++)
                map[i][j] = '.';

        map[hero.getY()][hero.getX()] = 'H';

        for (auto& enemy : enemies)
            if (enemy.Alive())
                map[enemy.getY()][enemy.getX()] = 'E';

        if (boss1.Alive())
            map[boss1.getY()][boss1.getX()] = 'B';

        if (boss2.Alive())
            map[boss2.getY()][boss2.getX()] = 'B';

        if (boss3.Alive())
            map[boss3.getY()][boss3.getX()] = 'B';
    }

    void LoadLevel(int level, Hero& hero, vector<Enemy>& enemies, BoslvlOne& boss1, BoslvlTwo& boss2, BoslvlThree& boss3, Enemy*& currentBoss)
    {
        hero.setX(10);
        hero.setY(19);

        enemies.clear();

        for (int i = 0; i < level * 6; i++)
        {
            Enemy enemy;
            enemy.setX(rand() % 20);
            enemy.setY(rand() % 20);
            enemies.push_back(enemy);
        }

        boss1 = BoslvlOne();
        boss2 = BoslvlTwo();
        boss3 = BoslvlThree();

        if (level == 1)
        {
            boss1.setX(10);
            boss1.setY(0);
            currentBoss = &boss1;
        }
        else if (level == 2)
        {
            boss2.setX(10);
            boss2.setY(0);
            currentBoss = &boss2;
        }
        else
        {
            boss3.setX(10);
            boss3.setY(0);
            currentBoss = &boss3;
            if (!boss3.Alive())
            {
                cout << "You win";
            }
        }
    }
};

