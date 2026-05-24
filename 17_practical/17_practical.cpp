#include <iostream>
#include "TV.h"
#include "AirConditioner.h"
#include "SmartRemote.h"
using namespace std;

int main()
{
    TV tv;
    AirConditioner ac;

    SmartRemote remote(&tv);

    remote.showinfo();

    remote.next();

    remote.setDevice(&ac);

    remote.showinfo();

    remote.plus();

    //ac.allPrint();

    remote.next();

    remote.allPrint();

    remote.setDevice(&tv);

    remote.next();

    remote.plus();

    remote.power();

    remote.allPrint();

}