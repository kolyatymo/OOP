#pragma once
#include <iostream>
#include <ctime>

using namespace std;

const int N = 20;

class Map
{
private:
    char grid[N][N];

public:
    Map()
    {
        generate();
    }

    void generate()
    {
        srand(time(0));

        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                grid[i][j] = '.';

        // слабі вороги
        for (int i = 0; i < 20; i++)
            grid[rand() % N][rand() % N] = 'e';

        // сильні вороги
        for (int i = 0; i < 10; i++)
            grid[rand() % N][rand() % N] = 'E';

        // бос зверху
        grid[0][10] = 'B';
    }

    char getCell(int x, int y)
    {
        return grid[y][x];
    }

    void clearCell(int x, int y)
    {
        grid[y][x] = '.';
    }

    void draw(int px, int py)
    {
        system("cls");

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == py && j == px)
                    cout << '@' << ' ';
                else
                    cout << grid[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

