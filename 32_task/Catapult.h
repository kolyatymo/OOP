#pragma once
#include "Shooter.h"

class Catapult : public Shooter
{
public:
	Catapult()
	{
		nameAmmunition = "Stone";
		numberAmmunition = 5;
	}

	

	void shoot()
	{
		cout << "Catapult --> ";
		Shooter::shoot();
	}

};

