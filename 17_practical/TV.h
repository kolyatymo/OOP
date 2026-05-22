#pragma once
#include "SmartRemote.h"
class TV :
    public SmartRemote
{
public:
	TV()
		:SmartRemote("TV", "off", 0, 1){}
};

