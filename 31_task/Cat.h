#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
	Cat(const string& name = "Cat", const string& habitat = "Land", const string& feeding = "Milk", const string& movement = "Run", const size_t& age = 0, const string& senseOrgans = "Eyes");

	void print() const;

private:
	string senseOrgans;
};

