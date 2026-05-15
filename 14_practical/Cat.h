#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
public:
    void sound() const override;
    void type() const override;
    void show() const override;
    Cat(const string& Name = "Cat", const size_t& age = 0);

};

