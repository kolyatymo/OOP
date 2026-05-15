#include "kangaroo.h"

void kangaroo::sound() const
{
	cout << "--> Hiss" << endl;
}

void kangaroo::type() const
{
	cout << "--> kangaroo" << endl;
}

void kangaroo::show() const
{
	cout << "kangaroo age   :: " << Animal::age << std::endl;
	cout << "kangaroo name  :: " << Animal::name << std::endl;
	cout << "kangaroo jump  :: " << jump << " Meters" << std::endl;
	
	cout << "kangaroo sound :: ";
	kangaroo::sound();
	cout << endl;
}

kangaroo::kangaroo(const string& Name, const size_t& age, const size_t& jump)
	:Animal(Name, age), jump{jump}
{

}
