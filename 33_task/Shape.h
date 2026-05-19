#pragma once
#include "iostream"
using std::cout;
using std::endl;


class Shape
{
public:
	virtual void print()const = 0;
	virtual void printShapeName() const = 0;

	virtual double area() {
		return 0;
	};
	virtual double volume() {
		return 0;
	};

};

