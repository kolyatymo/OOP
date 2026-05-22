#include <iostream>
#include "Auto.h"

using namespace std;

int main()
{
    try
    {
        Auto bmw("AB7777BK", 120);

        cout << "Number: " << bmw.getNumber() << endl;
        cout << "Speed: " << bmw.getSpead() << endl;

        bmw.moreSpead(50);

        cout << "New speed: " << bmw.getSpead() << endl;

        bmw.moreSpead(300); 

    }
    catch (const AutoException& ex)
    {
        cout << "Exception: " << ex.what() << endl;
        cout << "Bad value: " << ex.getValue() << endl;
    }
    catch (...)
    {
        cout << "Error" << endl;
    }

    
}


