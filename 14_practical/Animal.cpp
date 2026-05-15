#include "Animal.h"

void Animal::setAge(const size_t& age)
{
	this->age = age;
}

void Animal::setName(const string& name)
{
	if (!name.empty())
		this->name = name;
}

const size_t& Animal::getAge() const
{
	return this->age;
}

const string& Animal::getName() const
{
	return this->name;
}

void Animal::sound() const
{
	cout << "Animal different sounds" << endl;

}

void Animal::type() const
{
	cout << "Animal different type" << endl;

}

void Animal::show() const
{
	std::cout << "Animal age   :: " << age << std::endl;
	std::cout << "Animal name :: " << name << std::endl;
}

Animal::Animal(const string& Name, const size_t& age)
{
	setName(Name);
	setAge(age);
}
