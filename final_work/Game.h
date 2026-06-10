
#include "Hero.h"
#include "Enemy.h"
#include "Fight.h"
#include "BoslvlOne.h"
#include "BoslvlTwo.h"
#include "BoslvlThree.h"
#include "Maps.h"
#include "Shop.h"
#include <conio.h>

enum KeyRun
{
    UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77
};

class Game
{
public:
    Game()
    {
        level = 1;
    }

    void run();

    enum GameState
    {
        MAP, MENU
    };

    void showMenu();

private:
    GameState state = MAP;
    Hero hero;
    vector<Enemy> enemies;
    BoslvlOne boss1;
    BoslvlTwo boss2;
    BoslvlThree boss3;
    Fight fight;
    Enemy* currentBoss = nullptr;
    Maps maps;
    Shop shop;

    int level = 1;
    void input();
    void update();
    void render();
};

