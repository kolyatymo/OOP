#include "Dog.h"

Dog::Dog(const string& name, const string& habitat, const string& feeding, const string& movement, const size_t& age, const string& behavior, const string& color)
	:Pet(habitat, name, feeding, movement, age)
{
	this->behavior = behavior;
	this->color = color;
}

void Dog::print() const
{
	std::cout << "\n\n";
	std::cout << "Dog number   --> " << number << std::endl;
	std::cout << "Name         --> " << name << std::endl;
	std::cout << "Habitat      --> " << getHabitat() << std::endl;
	std::cout << "Feeding      --> " << getFeeding() << std::endl;
	std::cout << "Movement     --> " << movement << std::endl;
	std::cout << "Age          --> " << getAge() << std::endl;
	std::cout << "Behavior     --> " << behavior << std::endl;
	std::cout << "Color        --> " << color << std::endl;
}

