//#pragma once
//#include <conio.h>
//
//enum KeyCode
//{
//    UP = 72,
//    DOWN = 80,
//    LEFT = 75,
//    RIGHT = 77,
//    ESC = 27
//};
//
//class Player
//{
//private:
//    int x, y;
//
//public:
//    Player()
//    {
//        x = 10;
//        y = 10;
//    }
//
//    void move(int key)
//    {
//        if (key == UP) y--;
//        else if (key == DOWN) y++;
//        else if (key == LEFT) x--;
//        else if (key == RIGHT) x++;
//
//        // межі карти
//        if (x < 0) x = 0;
//        if (x >= 20) x = 19;
//        if (y < 0) y = 0;
//        if (y >= 20) y = 19;
//    }
//
//    int getX() { return x; }
//    int getY() { return y; }
//};
