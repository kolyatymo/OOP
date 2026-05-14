#pragma once
#include "Studenn.h"
#include "Employee.h"

class StudennEmploee
	:protected Studenn, protected Employee
{
public:
	StudennEmploee(const string& name, const string& nameEmploee, const string& specialization, const string& position);
	StudennEmploee(const Studenn& student, const Employee& employee);

	void print() const; // hides Studen::print() and Employee::print()
	~StudennEmploee();
};

