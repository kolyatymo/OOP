#include <iostream>
#include "IMove.h"


void demoMoveable(IMove* movable)
{
	cout << " __________ Demo func __________ " << endl;
	movable->move();
	cout << " Speed of moving :: " << movable->getSpeed() << endl;
}

class Owner
{
public:
	Owner(const string& name, IMove* moveable)
		:name{name}, moveable{moveable}{}

	void go()
	{
		cout << this->name << "\t ";
		moveable->move();
	}

private:
	IMove* moveable;
	string name;
};

int main()
{
	Eagle eagle;
	eagle.fly();

	Gull gull;
	
	IMove* im = &gull;
	im->move();

	IFly* ifl = &eagle;
	ifl->fly();

	Car car("BMW", 200);
	car.move();

	cout << "\n===========================\n";
	/*demoMoveable(&car);
	demoMoveable(&eagle);
	demoMoveable(&gull);
	demoMoveable(im);*/

	IMove* movies[]{ &car, &eagle, &gull };
	for (size_t i = 0; i < 3; i++)
	{
		demoMoveable(movies[i]);
		IFly* ii = dynamic_cast<IFly*>(movies[i]);
		if(ii != nullptr)
			ii->fly();
	}

	cout << "==========\n";

	Owner owner("Sergiy", &car);
	owner.go();
	

}


