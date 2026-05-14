#pragma once
#include <iostream>
using namespace std;

class Circle
{
public:
	Circle(const double& radius = 0)
		:radius{ radius }
	{

	}

	void print() const {
		cout << "radius --> " << this->radius << endl;
	}

	double area() {
	
		double sum = 3.14 * (radius * radius);
		return sum;
	}

	double length() {
		double sum = 2 * 3.14 * radius;
		return sum;
	}

protected:
	double radius;
};

