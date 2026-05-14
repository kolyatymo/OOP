#include "Studenn.h"
using std::cout;
using std::endl;


Studenn::Studenn(const string& name, const string& specialization)
	:Person{ name }, specialization{ specialization }
{
	cout << "\t >>>>>>>> Ctor Student --> " << this->name << endl;
}

Studenn::~Studenn()
{
	cout << "\t >>>>>>>> Dtor Student --> " << this->name << endl;
}

void Studenn::print() const
{
	cout << "Student name :: " << this->name << endl;
	cout << "Student spec :: " << this->specialization << endl;
}