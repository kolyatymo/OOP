#include "Zoo.h"

Zoo Zoo::pushAnimal(const string& type, const string& alias, const size_t& age)
{

}

void Zoo::print() const
{
	Cat::show();
	Dog::show();
	Perrot::show();
	Hamster::show();
	kangaroo::show();
	Shark::show();

}

Zoo::~Zoo()
{
	if (!zoo.empty())
		zoo.clear();
}
