#pragma once
#include <iostream>
using namespace std;

class Square
{
public:
	Square(const double& side = 0)
		:side{side}
	{

	}

	void print()const {
		cout << "Side --> " << this->side << endl;
	}

	double area() {
		double sum = side * side;
		return sum;
	}

	double perimeter() {
		double sum = side * 4;
		return sum;
	}


protected:
	double side;
};

