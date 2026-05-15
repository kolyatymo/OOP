#pragma once
#include "Animal.h"
class kangaroo :
    public Animal
{
public:
    void sound() const override;
    void type() const override;
    void show() const override;
    kangaroo(const string& Name = "Kangaroo", const size_t& age = 0, const size_t& jump = 3);

private:
    size_t jump;
};

