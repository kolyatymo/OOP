#include "Student.h"

size_t Student::lastID = 0;

void Student::setName(const string& name)
{
	if (!name.empty())
		this->name = name;
}

void Student::setCollege(const string& college)
{
	if (!college.empty())
		this->college = college;
}


const string& Student::getName() const
{
	return this->name;
}

const string& Student::getCollege() const
{
	return this->college;
}



void Student::print() const
{
	cout << "Student id      --> " << id << endl;
	cout << "Student Name    --> " << name << endl;
	cout << "Student College --> " << college << endl;
	cout << "Student Group   --> " << group << endl;
	cout << "Student age     --> " << age << endl;

}

Student::Student(const string& name, const string& college, const string& group, const size_t& age)
{
	setName(name);
	setCollege(college);
	this->group = group;
	this->age = age;
	id = ++lastID;
}

