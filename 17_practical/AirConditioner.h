#pragma once
#include "SmartRemote.h"
class AirConditioner :
    public SmartRemote
{
    AirConditioner()
        :SmartRemote("AirConditioner", "off", 0, 1){}
};

