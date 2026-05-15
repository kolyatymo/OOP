#pragma once
#include "ArcherTower.h"
#include "Catapult.h"

class Fortess
	:public ArcherTower, public Catapult
{
public:
	Fortess()
	{
		ArcherTower::giveAmmunition("Arrow", 4);
		Catapult::giveAmmunition("Stone", 5);
	}

	void arckershot() {
		Archer::shoot();
	}

	void Rangeshot()
	{
		Range::shoot();
	}

	void Catapultshot()
	{
		Catapult::shoot();
	}

	void giveArrow(const size_t& numb) {
		ArcherTower::giveAmmunition("arrow", numb);
	}
	
	void giveStone(const size_t& numb) {
		Catapult::giveAmmunition("Stone", numb);
	}

	void info() const
	{
		cout << "Arrow --> " << ArcherTower::numberAmmunition << endl;
		cout << "Stone --> " << Catapult::numberAmmunition << endl;
		cout << "wall thickness --> " << wallThickness << " cm " << endl;
		cout << "gate status    --> " << gateStatus << "  % " << endl;
		cout << "wall heigth    --> " << wallHeight << "   Meters " << endl;
	};


protected:
	size_t wallThickness = 100;
	size_t gateStatus = 70;
	size_t wallHeight = 7;
};

