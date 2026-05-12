#include "Pet.h"


size_t Pet::lastNumber = 0;

void Pet::setHabitat(const string& habitat)
{
	if(!habitat.empty())
		this->habitat = habitat;
}

void Pet::setName(const string& name)
{
	if (!name.empty())
		this->name = name;
}

void Pet::setFeeding(const string& feeding)
{
	if (!feeding.empty())
		this->feeding = feeding;
}

void Pet::setMovement(const string& movement)
{
	if (!movement.empty())
		this->movement = movement;
}

void Pet::setAge(const size_t& age)
{
	this->age = age;
}

const string& Pet::getHabitat() const
{
	return this->habitat;
}

const string& Pet::getName() const
{
	return this->name;
}

const string& Pet::getFeeding() const
{
	return this->feeding;
}

const string& Pet::getMovement() const
{
	return this->movement;
}

const size_t& Pet::getAge() const
{
	return this->age;
}

Pet::Pet(const string& habitat, const string& name, const string& feeding, const string& hmovement, const size_t& age)
{
	setHabitat(habitat);
	setName(name);
	setFeeding(feeding);
	setMovement(hmovement);
	setAge(age);
	number = ++lastNumber;
}

void Pet::print() const
{
	std::cout << "\n\n";
	std::cout << "Pet number   --> " << number << std::endl;
	std::cout << "Pet name     --> " << name << std::endl;
	std::cout << "Pet habitat  --> " << habitat << std::endl;
	std::cout << "Pet feeding  --> " << feeding << std::endl;
	std::cout << "Pet movement --> " << movement << std::endl;
	std::cout << "Pet age      --> " << age << std::endl;

}
