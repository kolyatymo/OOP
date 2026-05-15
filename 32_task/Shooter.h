#pragma once
#include <iostream>
using namespace std;

class Shooter
{
public:
	Shooter(const string& nameAmmun = "NoAmmun", const size_t& numbAmmun = 0) 
		:nameAmmunition{nameAmmun}, numberAmmunition{numbAmmun}
	{
		
	}

	void shoot() 
	{
		if (numberAmmunition == 0)
			cout << "Ammunition is empty" << endl;
		else
		{
			numberAmmunition--;
			cout << "shot --> " << this->nameAmmunition << endl;
		}
	}

	void giveAmmunition(const string& nameAmmu, const size_t Ammu)
	{
		if (nameAmmunition == nameAmmu)
			numberAmmunition += Ammu;
		else
		{
			nameAmmunition = nameAmmu;
			numberAmmunition = Ammu;
		}
	}


protected:
	string nameAmmunition;
	size_t numberAmmunition;
};

