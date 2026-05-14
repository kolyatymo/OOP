#pragma once
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Person
{
public:
	Person(const string& name):
		name{name}{
		cout << "\t Ctor Person --> " << this->name << endl;
	}

	void print()const {
		cout << "Name --> " << this->name << endl;
	}

	~Person() {
		cout << "\t Dtor Person --> " << this->name << endl;
	}

protected:
	string name;
};

