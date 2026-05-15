#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
public:
     void sound() const override;
	 void type() const override;
	 void show() const override;
	 Dog(const string& Name = "Dog", const size_t& age = 0);
};

