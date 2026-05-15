#pragma once
#include "Animal.h"
class Lion :
	public Animal
{
public:
	Lion(const string& place = "Africa", const size_t& age = 0, bool isAlone = false);
	void print() const override; // перекриття приховування методу із базового класу
	void eat() const override;
	void move() const override;
	~Lion();
private:
	bool isAlone = true;

	// Inherited via Animal
};
