#include <iostream>
#include "Studentt.h"
#include "Employee.h"
#include "StudentEmploee.h"
using namespace std;

int main()
{
    Studentt stud("DENIS", "CS");
    stud.print();

    Employee emp("Denis", "Manager");
    emp.print();

    cout << "\n\n";
    StudentEmploee studemp("DENIS", "Denis", "CS", "Manager");
    studemp.print();
    /*studemp.Studentt::print();*/
}
