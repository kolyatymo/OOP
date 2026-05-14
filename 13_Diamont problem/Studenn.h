#pragma once
#include "Person.h"

class Studenn :virtual public Person
{
public:
	Studenn(const string& name = "Noname", const string& specialization = "NoSpec");
	~Studenn();

	void print()const;

protected:
	//string name;
	string specialization;
};
