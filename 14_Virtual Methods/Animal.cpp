#include "Animal.h"

size_t Animal::latsId = 0;

void Animal::setAge(const size_t& age)
{
	this->age = age;
}

void Animal::setPlace(const string& place)
{
	if (!place.empty())
		this->place = place;
}

const size_t& Animal::getAge() const
{
	return this->age;
}

const string& Animal::getPlace() const
{
	return this->place;
}

void Animal::print() const
{
	std::cout << "Animal ID    :: " << id << std::endl;
	std::cout << "Animal age   :: " << age << std::endl;
	std::cout << "Animal place :: " << place << std::endl;
}

void Animal::eat() const
{
	cout << "Animal Id --> " << id << " eats some food" << endl;
}

Animal::Animal(const string& place, const size_t& age)
{
	setAge(age);
	setPlace(place);
	id = ++latsId;
	std::cout << ">>>>> Ctor Animal Id --> " << id << std::endl;
}

Animal::~Animal()
{
	std::cout << ">>>>> Dtor Animal Id --> " << id << std::endl;
}