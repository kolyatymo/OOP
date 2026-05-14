#pragma once
#include "Studentt.h"
#include "Employee.h"

class StudentEmploee
	:protected Studentt, protected Employee
{
public:
	StudentEmploee(const string& nameStudent, const string& nameEmploee, const string& specialization, const string& position);
	StudentEmploee(const Studentt& student, const Employee& employee);

	void print() const; // hides Studen::print() and Employee::print()
	~StudentEmploee();
};

