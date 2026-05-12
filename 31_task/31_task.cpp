#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
using namespace std;

int main()
{
    
    Dog dog("Dog", "House", "Meat", "Run", 5, "Loyal");
	Cat cat("Cat", "Apartment", "Fish", "Jump", 3, "Independent");
	Parrot parrot("Parrot", "Cage", "Seeds", "Fly", 2, "Talkative");

	cout << "Dog Information" << endl;
	dog.print();
	cout << endl;

	cout << "Cat Information" << endl;
	cat.print();
	cout << endl;

	cout << "Parrot Information" << endl;
	parrot.print();
	cout << endl;

}

