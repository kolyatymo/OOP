#pragma once
#include <iostream>
using namespace std;


class IMobile
{
public:
	virtual void move() const = 0;
	virtual size_t getSpead() const = 0;
};

class Animal : public IMobile
{
	size_t spead;
public:
	Animal(const size_t& spead)
		:spead{spead}
	{

	}

	void move() const
	{
		cout << "Animal " << typeid(*this).name() << "can run" << endl;
	}

	size_t getSpead() const
	{
		return spead;
	}
};

class Mavpa : public Animal
{
public:
	Mavpa()
		:Animal(345)
	{

	}
};

class mavpanian : public Animal
{
public:
	mavpanian()
		:Animal(077)
	{

	}
};


