#include "StudennEmployee.h"
using std::cout;
using std::endl;

StudennEmploee::StudennEmploee(const string& name, const string& nameEmploee, const string& specialization, const string& position)
	:Person(name), Studenn("", specialization), Employee("---", position)
{
	/*Studentt::name = nameStudent;
	Employee::name = nameEmploee;*/
	cout << "\t Ctor StudentEmployee --> " << endl;
}

StudennEmploee::StudennEmploee(const Studenn& student, const Employee& employee)
	:Person(student), Studenn(student), Employee(employee)
{
	cout << "\t Ctor StudentEmployee --> " << endl;
}

void StudennEmploee::print() const
{
	/*Studenn::print();
	Employee::print();*/

	cout << "Name    --> " << Studenn::name << endl;
	cout << "Studies --> " << specialization << endl;
	cout << "Work as --> " << position << endl;

}

StudennEmploee::~StudennEmploee()
{
	cout << "\t Dtor StudentEmployee --> " << endl;
}