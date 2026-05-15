#pragma once
#include "Animal.h"
class Hamster :
    public Animal
{
public:
    void sound() const override;
    void type() const override;
    void show() const override;
    Hamster(const string& Name = "Hamster", const size_t& age = 0);

};

