#pragma once
#include <iostream>
using namespace std;

class Passport
{
public:
	void setName(const string& name);
	void setSurname(const string& surname);

	const string& getName()const;
	const string& getSurname()const;


	Passport(const string& name = "noName", const string& surname = "noSurname", const string& country = "noCountry", const size_t& number = 0);
	

	void print() const;


private:
	string name;
	string surname;

protected:
	string country;
	size_t number;

		
};

