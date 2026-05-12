#include "Aspirant.h"

Aspirant::Aspirant(const string& name, const string& college, const string& group, const size_t& age, const string& nameWork, const size_t& dateOfprotection)
	:Student(name, college, group, age), nameWork(nameWork), dateOfprotection(dateOfprotection)
{
}

void Aspirant::print() const
{
	cout << "Student id             --> " << id << endl;
	cout << "Student Name           --> " << getName() << endl;
	cout << "Student College        --> " << getCollege() << endl;
	cout << "Student Group          --> " << group << endl;
	cout << "Student age            --> " << age << endl;
	cout << "Student Name Work      --> " << nameWork << endl;
	cout << "Student date of protec --> " << dateOfprotection << endl;
}
