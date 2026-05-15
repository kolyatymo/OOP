#include "Shark.h"

void Shark::sound() const
{
	cout << "--> Chomp" << endl;
}

void Shark::type() const
{
	cout << "--> Shark" << endl;
}

void Shark::show() const
{
	cout << "Shark age   :: " << Animal::age << std::endl;
	cout << "Shark name  :: " << Animal::name << std::endl;
	cout << "Shark move  :: " << move << std::endl;

	cout << "Shark sound :: ";
	Shark::sound();
	cout << endl;
}

Shark::Shark(const string& Name, const size_t& age, const string& move)
	:Animal(Name,age), move{move}
{
}
