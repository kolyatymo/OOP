#include "Person.h"
#include <vector>

int main()
{
	Person ann("Ann");
	Student ivan("Ivan", "Design");
	Aspirant matviy("Matviy", "CS", "AL");

	ann.print();
	ivan.print();
	matviy.print();


	// Dynamical_cast

	Person* person = &ivan;
	person->print();
	// person->learn()
	cout << "\n------------- Dynamic_Cast ----------- " << endl;
	//((Student*)person)->learn();
	Student* s = dynamic_cast<Student*>(person); // nullptr
	
	if (s != nullptr) // ok cast
	{
		s->learn();
	}
	else
	{
		cout << "Untenable cast " << person->getName() << " to Student " << endl;
	}
	
	Aspirant* a = dynamic_cast<Aspirant*>(person); // nullptr


	if (a != nullptr) // ok cast
	{
		a->writeDyplom();
	}
	else
	{
		cout << "Untenable cast " << person->getName() << " to Student " << endl;
	}

	cout << "\n\n";

	vector<Person*> people{ &ann, &ivan, &matviy };
	cout << " ________________ Pepple ______________" << endl;
	for (Person* p : people)
	{
		p->print();
		//((Student*)p)->learn(); // erro
		s = dynamic_cast<Student*>(p);
		if (s != nullptr)
			s->learn();
		a = dynamic_cast<Aspirant*>(p);
		if (a != nullptr)
			a->writeDyplom();

		cout << endl;
	}

	cout << "_____________ TYPEID ______________" << endl;
	auto val = 12.34;
	cout << "auto val = 12,34 " << typeid(val).name() << endl;
	cout << "typeid person " << typeid(person).name() << endl; // Person
	cout << "typeid person " << typeid(*person).name() << endl; // Student
	
	/*if (typeid(*person) == typeid(Aspirant))
	{
		((Student*)person)->learn();
	}*/

	cout << "\n\n typeid ________________ Pepple ______________" << endl;
	for (Person* p : people)
	{
		p->print();
		if (typeid(*p) == typeid(Student))
			((Student*)p)->learn();
		if (typeid(*p) == typeid(Aspirant))
		{
			((Aspirant*)p)->writeDyplom();
			((Aspirant*)p)->learn();
		}

		cout << endl;
	}

}
