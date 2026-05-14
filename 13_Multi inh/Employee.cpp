#include "Employee.h"
using std::cout;
using std::endl;

Employee::Employee(const string& name, const string& position)
	:name{name},position{position}
{
	cout << "\t >>>>>>> Ctor Employee --> " << this->name << endl;
}

Employee::~Employee()
{
	cout << "\t >>>>>>> Dtor Employee --> " << this->name << endl;
}

void Employee::print() const
{
	cout << "Employee name        :: " << this->name << endl;
	cout << "Employee position    :: " << this->position << endl;
}
