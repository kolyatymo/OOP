#include <iostream>
#include "Grandpa.h"
#include <vector>

int main()
{
    Grandpa gran("Ivan", "Sleap");
    Daddy dad("Sasha", "Sleap", "Walk");
    Son son("Misha", "Sleap", "Walk", "Play");

    /*cout << "------------------ Grandpa  ------------------" << endl;
    gran.print();
    cout << "------------------ Daddy  ------------------" << endl;
    dad.print();
    son.print();
    cout << "\n\n";*/

    vector<Grandpa*> family{ &gran, &dad, &son };

    /*cout << "_____________ TypeID ______________" << endl;

    for (Grandpa* f : family)
    {
        f->print();
        if (typeid(*f) == typeid(Daddy))
            ((Daddy*)f)->Walk();
        if (typeid(*f) == typeid(Son))
        {
            ((Son*)f)->Walk();
            ((Son*)f)->Play();
        }
        cout << endl;
    }

    Grandpa* granpa = &gran;

    Daddy* d = dynamic_cast<Daddy*>(granpa);

    Son* s = dynamic_cast<Son*>(granpa);

    cout << "_____________ Dynamic_Cast ______________" << endl;

    for (Grandpa* f : family)
    {
        f->print();
        d = dynamic_cast<Daddy*>(f);
        if (d != nullptr)
            d->Walk();
        s = dynamic_cast<Son*>(f);
        if (s != nullptr)
            s->Play();

        cout << endl;
        
    }*/

    //cout << "_____________ Static_Cast ______________" << endl;


   /*Grandpa& grand = dad;

    Daddy dady = (Daddy&)dad;

    for (Grandpa* f : family)
    {
        f->print();
        if (typeid(dad) == typeid(Daddy))
        {
            Daddy dady = static_cast<Daddy&>(dad);
            dady.print();
        }

        cout << endl;
    }*/

}



