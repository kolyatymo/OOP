#pragma once
#include "Animal.h"
class Shark :
    protected Animal
{
public:
    void sound() const override;
    void type() const override;
    void show() const override;
    Shark(const string& Name = "Hamster", const size_t& age = 0, const string& move = "Swim");

private:
    string move;
};

