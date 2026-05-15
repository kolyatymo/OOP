#include "Perrot.h"

void Perrot::sound() const
{
	cout << "--> Chirp" << endl;
}

void Perrot::type() const
{
	cout << "--> Perrot" << endl;
}

void Perrot::show() const
{
	cout << "Perrot age   :: " << Animal::age << std::endl;
	cout << "Perrot name  :: " << Animal::name << std::endl;
	cout << "Perrot sound :: ";
	Perrot::sound();
	cout << endl;
}

Perrot::Perrot(const string& Name, const size_t& age)
	:Animal(Name,age)
{
}
