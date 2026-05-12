#pragma once
#include "Pet.h"


class Dog : public Pet
{
public:
	Dog(const string& name = "Dog", const string& habitat = "Land", const string& feeding = "Meat", const string& movement = "Run", const size_t& age = 0, const string& behavior = "protection", const string& color = "NoCollor");

	void print() const;

private:
	string behavior;
	string color;
};

