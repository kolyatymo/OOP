#pragma once
#include "Circle.h"

class Cylinder : public Circle
{
public:
	Cylinder(const size_t& x, const size_t& y, const size_t& r, const size_t& heigth)
		:Circle(x,y,r), heigth{heigth}{}


	double area() override
	{
		double sum = 2 * 3.14 * r * (r + heigth);
		return sum;
	}

	double volume() override 
	{
		double sum = 3.14 * r * r * heigth;
		return sum;
	}

	virtual void print()const override
	{
		cout << "Cylinder --> " << "X -->  :" << x << ":   Y -->  :" << y << ":" << "  R -->  :" << r << ":   H --> " << "  :" << heigth << ":" << endl;
	}


	virtual void printShapeName() const
	{
		cout << "Cylinder" << endl;
	}


private:
	size_t heigth;
};

