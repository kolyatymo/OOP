#include <iostream>
#include <vector>
#include "Animal.h"
#include "Lion.h"
#include "Wolf.h"
using namespace std;


int main()
{
    Animal animal("South Africa", 2);
    animal.print();

    Animal animal2("North Africa", 3);
    animal2.print();

    Lion lion("Africa", 5, false);
    lion.print();

    Wolf wolf;
    wolf.print();



    /*Animal arr[]{ lion, wolf };

    for (size_t i = 0; i < ; i++)
    {

    }*/
    
    //vector<Animal*> arr{animal*)&lion, (Animal*)&wolf;

}


