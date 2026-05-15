#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Perrot.h"
#include "Hamster.h"
#include "Shark.h"
#include "kangaroo.h"
#include <vector>


int main()
{
    /*Cat cat("Cat", 5);
    cat.show();
    
    Dog dog("Dog", 3);
    dog.show();

    Hamster ham;
    ham.show();

    Perrot per("Perrot", 8);
    per.show();*/

    Animal* arr[] = { new Cat("Murka", 2),new Dog("Myha",6), new Hamster(), new Perrot("Kesha", 10), new kangaroo("joni", 20, 6),(Animal*) new Shark()};
    for (size_t i = 0; i < 6; i++)
    {
        arr[i]->show();
        arr[i]->sound();
        arr[i]->type();
    }

}

