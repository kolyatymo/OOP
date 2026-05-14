#include <iostream>
#include "Person.h"
#include "Studenn.h"
#include "Employee.h"
#include "StudennEmployee.h"

int main()
{
    Person person("Alex");
    Studenn stud("Denis", "CS");
    Employee emp("DENIS", "Manager");

    person.print();
    stud.print();
    emp.print();

    cout << "\n\n";
    StudennEmploee stemp("Denis", "D", "CS", "Manager");

    stemp.print();

}

