#include "Hamster.h"

void Hamster::sound() const
{
	cout << "--> Frr" << endl;
}

void Hamster::type() const
{
	cout << "--> Hamster" << endl;
}

void Hamster::show() const
{
	cout << "Hamster age   :: " << Animal::age << std::endl;
	cout << "Hamster name  :: " << Animal::name << std::endl;
	cout << "Hamster sound :: ";
	Hamster::sound();
	cout << endl;
}

Hamster::Hamster(const string& Name, const size_t& age)
	:Animal(Name,age)
{
}
