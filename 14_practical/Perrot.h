#pragma once
#include "Animal.h"
class Perrot :
    public Animal
{
public:
    void sound() const override;
    void type() const override;
    void show() const override;
    Perrot(const string& Name = "Perrot", const size_t& age = 0);

};

