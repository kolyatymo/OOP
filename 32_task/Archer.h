#pragma once
#include "Shooter.h"

class Archer :virtual public Shooter
{
public:
	Archer(){}

	void shoot()
	{
		cout << "Archer --> ";
		Shooter::shoot();
	}

};

