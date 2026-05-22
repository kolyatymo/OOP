#pragma once
#include <iostream>
using namespace std;

// __interface
// interface - пропунує абстрактну поведінку (може містити чисті віртуал функції)

struct IMove
{
	virtual void move() const = 0;
	virtual size_t getSpeed() const = 0;

};


struct IFly : /*public*/ IMove // struct по замовчуванню public
{
	virtual void fly() const = 0;
	virtual size_t getHeight() const = 0;
};

class Bird : public IFly
{
	size_t speed;
	size_t height;
public:
	Bird(const size_t& height, const size_t& speed)
		:height{height}, speed{speed}{}

	// Inherited via IFly

	void move() const override
	{
		cout << "Bird " << typeid(*this).name() << " can walk and fly " << endl;
	}

	size_t getSpeed() const override
	{
		return speed;
	}

	void fly() const override
	{
		cout << "Bird " << typeid(*this).name() << " can fly on height " << getHeight() << endl;

	}

	size_t getHeight() const override
	{
		return height;
	}

};

class Eagle : public Bird
{
public:
	Eagle()
		:Bird(2000,30){}


};

class Gull : public Bird
{
public:
	Gull()
		:Bird(500, 5){}


};

class Car : public IMove
{
	size_t speed;
	string brand;
public:
	Car(const string& brand, const size_t& speed)
		:brand{brand}, speed{speed}{}

	void move() const override
	{
		cout << " Car " << brand << " can move with speed " << getSpeed() << endl;
	}

	size_t getSpeed() const override
	{
		return speed;
	}
};