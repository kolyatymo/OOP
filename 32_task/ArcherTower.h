#pragma once
#include "Archer.h"
#include "Range.h"

class ArcherTower
	:public Archer, public Range
{
public:
	ArcherTower()
		:Shooter("Arrow", 4)
	{

	}
};

