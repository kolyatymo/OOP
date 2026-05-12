#pragma once
#include "Student.h"

class Aspirant : public Student
{
public:
	Aspirant(const string& name = "noName", const string& college = "nocollege", const string& group = "noGroup", const size_t& age = 0, const string& nameWork = "NoNameWork", const size_t& dateOfprotection = 0);

	void print() const;

private:
	size_t dateOfprotection;
	string nameWork;
};

