#include "Parrot.h"

Parrot::Parrot(const string& name, const string& habitat, const string& feeding, const string& movement, const size_t& age, const string& life)
	: Pet(habitat, name, feeding, movement, age), life(life)
{
}

void Parrot::print() const
{
	std::cout << "\n\n";
	std::cout << "Parrot number --> " << number << std::endl;
	std::cout << "Name         --> " << name << std::endl;
	std::cout << "Habitat      --> " << getHabitat() << std::endl;
	std::cout << "Feeding      --> " << getFeeding() << std::endl;
	std::cout << "Movement     --> " << movement << std::endl;
	std::cout << "Age          --> " << getAge() << std::endl;
	std::cout << "Life         --> " << life << std::endl;
}

