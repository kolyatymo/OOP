#include <iostream>
#include "Pupil.h"
using namespace std;

class Person {
    string name;
    string lastname;
    friend void fillPerson(Person& person);
    friend void printPerson(Person& person);
};


void fillPerson(Person& person)
{
    person.name = "Alex";
    person.lastname = "Bondar";
}

void printPerson(Person& person)
{
    cout << person.name << " " << person.lastname << endl;
}


int main()
{
    // Friend function

    /*Person alex;
    fillPerson(alex);
    printPerson(alex);*/


    Teacher teacher;
    Pupil pupil("Alex");
    pupil.print();
    cout << endl;

    teacher.setMarkMath(pupil, 10);
    teacher.setMarkEnglish(pupil, 11);

    pupil.print();
    cout << "Avg --> " << avg(pupil) << endl;
    cout << pupil << endl;

    cin >> pupil;
    cout << pupil << endl;
    pupil.print();

}


