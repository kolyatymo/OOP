#pragma once
#include "Cat.h"
#include "Dog.h"
#include "Perrot.h"
#include "Hamster.h"
#include "Shark.h"
#include "kangaroo.h"
#include <vector>
using std::vector;

class Zoo
	:public Dog, public Cat, public Perrot, public Hamster, public Shark, public kangaroo
{
	Zoo();

	Zoo pushAnimal(const string& type, const string& alias, const size_t& age);

	void print() const;

	~Zoo();
private:
	vector<Animal*> zoo;
};

