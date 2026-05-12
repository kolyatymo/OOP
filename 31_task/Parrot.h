#pragma once
#include "Pet.h"

class Parrot : public Pet
{
public:
	Parrot(const string& name = "Parrot", const string& habitat = "Air", const string& feeding = "Seeds", const string& movement = "Fly", const size_t& age = 0, const string& life = "Long");

	void print() const;

private:
	string life;
};

