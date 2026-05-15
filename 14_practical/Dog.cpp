#include "Dog.h"

void Dog::sound() const
{
	cout << "--> Gav" << endl;
}

void Dog::type() const
{
	cout << "--> Dog" << endl;
}

void Dog::show() const
{
	cout << "Dog age   :: " << Animal::age << std::endl;
	cout << "Dog name  :: " << Animal::name << std::endl;
	cout << "Dog sound :: ";
	Dog::sound();
	cout << endl;
}

Dog::Dog(const string& Name, const size_t& age)
	:Animal(Name, age)
{
}
