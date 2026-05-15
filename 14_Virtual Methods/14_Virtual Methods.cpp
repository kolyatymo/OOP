#include <iostream>
#include "Lion.h"
#include "Wolf.h"

int main()
{
   /* Animal animal("South Africa", 2);
    animal.print();*/

    Lion lion("Africa", 4, false);
    lion.print();

    Wolf wolf;
    wolf.print();

    Animal& test = lion;
    cout << "\n\n";
    test.print();
    test.eat();
    cout << "\n\n";

    Animal* test2 = (Animal*)&wolf;
    cout << "\n\n";
    test2->print();
    test2->eat();
    cout << "\n\n";

    Animal* zoo[] {& lion, (Animal*)&wolf , new Lion("Central Africa", 6, true)};
    cout << "Print zoo" << endl;
    for (size_t i = 0; i < 3; i++)
    {
        zoo[i]->print();
        zoo[i]->eat();
        zoo[i]->move();
        cout << endl;
    }

}


