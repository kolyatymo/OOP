
#include <iostream>
#include "TV.h"
using namespace std;

#include "TV.h"

#include "TV.h"

int main()
{
    TV tv;   
    tv.power();
    tv.print();
    

    Remote remote(&tv);   
    
    +remote;
    tv.print();

    ++remote;
    tv.print();

    TV tv2(on, 4, 6, 7, 6);
    tv2.power();
    remote.chooseTV(&tv2);
    remote.power();
    +remote;
    tv2.print();

    ++remote;
    tv2.print();
    ++remote;
    tv2.print();
    remote.goChannel(10);
    tv2.print();
}
