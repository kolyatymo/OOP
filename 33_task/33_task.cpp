#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Point.h"
#include "Cylinder.h"
#include "vector"

using namespace std;


int main()
{
	vector<Shape*> shape;

	shape.push_back(new Circle(1, 2, 3));
	shape.push_back(new Cylinder(1, 2, 3, 4));
	shape.push_back(new Cylinder(1, 2, 5, 7));
	
	for (int i = 0; i < shape.size(); i++)
	{
		cout << "Area   --> " << shape[i]->area() << endl;
		cout << "Volume --> " << shape[i]->volume() << endl;
		cout << "Shape Name --> ";
		shape[i]->printShapeName();
		shape[i]->print();
		cout << "-----------------------------" << endl;
	}
}

