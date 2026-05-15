#pragma once
#include "Shooter.h"

class Range :virtual public Shooter
{
public:

	Range(){}


	void shoot()
	{
		cout << "Range --> ";
		Shooter::shoot();
	}

};
