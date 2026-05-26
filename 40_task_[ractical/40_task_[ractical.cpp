#include <iostream>
#include "IMobile.h"


int main()
{
    Mavpa mavpa;
    mavpa.move();

    IMobile* im = &mavpa;

    im->move();

    
}


