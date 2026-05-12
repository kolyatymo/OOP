#include "Cat.h"

Cat::Cat(const string& name, const string& habitat, const string& feeding, const string& movement, const size_t& age, const string& senseOrgans)
	:Pet(habitat, name, feeding, movement, age)
{
	this->senseOrgans = senseOrgans;
}

void Cat::print() const
{
	std::cout << "\n\n";
	std::cout << "Cat number   --> " << number << std::endl;
	std::cout << "Name         --> " << name << std::endl;
	std::cout << "Habitat      --> " << getHabitat() << std::endl;
	std::cout << "Feeding      --> " << getFeeding() << std::endl;
	std::cout << "Movement     --> " << movement << std::endl;
	std::cout << "Age          --> " << getAge() << std::endl;
	std::cout << "Sense Organs --> " << senseOrgans << std::endl;
}

