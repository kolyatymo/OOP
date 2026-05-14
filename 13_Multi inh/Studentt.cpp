
#include "Studentt.h"
using std::cout;
using std::endl;

Studentt::Studentt(const string& name, const string& specialization)
	:name{name}, specialization{specialization}
{
	cout << "\t >>>>>>>> Ctor Student --> " << this->name << endl;
}

Studentt::~Studentt()
{
	cout << "\t >>>>>>>> Dtor Student --> " << this->name << endl;
}

void Studentt::print() const
{
	cout << "Student name :: " << this->name << endl;
	cout << "Student spec :: " << this->specialization << endl;
}
