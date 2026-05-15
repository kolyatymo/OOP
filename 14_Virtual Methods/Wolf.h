#pragma once
#include "Animal.h"
class Wolf final: // final від цього класу не можна успадковуватися 
    protected Animal
{
public:
	Wolf(const string& place = "Europe", const size_t& age = 0, const size_t& weigth = 1);
	~Wolf();
	void print() const override final; // похіжним типам заборонено перевизначати цей віртуальний метод
	void eat() const override;
	void move() const override;

protected:
	size_t weigth;

	// Inherited via Animal
};

//class BlueWolf : public Wolf
//{
//public:
//	void print() const;
//};

