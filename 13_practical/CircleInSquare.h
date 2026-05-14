#pragma once
#include "Circle.h"
#include "Square.h"

class CircleInSquare
	:public Circle, public Square
{
public:

	double generalLength() 
	{
		return Circle::length() + Square::perimeter();
	}
	double areaFigure() {
		return Square::area() - Circle::area();
	}

	double CircleINSquare(double rad) {
		radius = rad;
		return side = radius * 2.0;
	}
	double SquareINCircle(double sid) {
		side = sid;
		return radius = side / 2.0;
	}
};

