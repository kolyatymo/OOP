#include "Cat.h"

void Cat::sound() const
{
	cout << "--> Meow" << endl;
}

void Cat::type() const
{
	cout << "--> Cat" << endl;
}

void Cat::show() const
{
	cout << "Cat age   :: " << Animal::age << std::endl;
	cout << "Cat name  :: " << Animal::name << std::endl;
	cout << "Cat sound :: ";
	Cat::sound();
	cout << endl;
}

Cat::Cat(const string& Name, const size_t& age)
	:Animal(Name,age)
{
}
