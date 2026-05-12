#include "Passport.h"

void Passport::setName(const string& name)
{
	if (!name.empty())
		this->name = name;
}

void Passport::setSurname(const string& surname)
{
	if (!surname.empty())
		this->surname = surname;
}

const string& Passport::getName() const
{
	return this->name;
}

const string& Passport::getSurname() const
{
	return this->surname;
}


void Passport::print() const
{
	cout << "Passport Name    --> " << getName() << endl;
	cout << "Passport Surname --> " << getSurname() << endl;
	cout << "Passport Country --> " << country << endl;
	cout << "Passport Number  --> " << number << endl;
}

Passport::Passport(const string& name, const string& surname, const string& country, const size_t& number)
{
	setName(name);
	setSurname(surname);
	this->country = country;
	this->number = number;
}
