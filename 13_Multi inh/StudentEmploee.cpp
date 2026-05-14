#include "StudentEmploee.h"
using std::cout;
using std::endl;

StudentEmploee::StudentEmploee(const string& nameStudent, const string& nameEmploee, const string& specialization, const string& position)
	:Studentt(nameStudent, specialization), Employee(nameEmploee, position)
{
	/*Studentt::name = nameStudent;
	Employee::name = nameEmploee;*/
	cout << "\t Ctor StudentEmployee --> " << endl;
}

StudentEmploee::StudentEmploee(const Studentt& student, const Employee& employee)
	:Studentt(student), Employee(employee)
{
	cout << "\t Ctor StudentEmployee --> " << endl;
}

void StudentEmploee::print() const
{
	Studentt::print();
	Employee::print();
}

StudentEmploee::~StudentEmploee()
{
	cout << "\t Dtor StudentEmployee --> " << endl;
}
