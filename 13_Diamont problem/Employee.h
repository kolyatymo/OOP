#pragma once
#include "Person.h"

class Employee :virtual public Person
{
public:
	Employee(const string& name = "Noname", const string& position = "Nopos");
	~Employee();

	void print()const;

protected:
	/*string name;*/
	string position;
};

