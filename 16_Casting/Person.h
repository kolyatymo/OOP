#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name = "Noname";
	size_t counter = 0;
public:
	Person() = default;
	Person(const string& name)
	{
		setName(name);
	}
	void setName(const string& name)
	{
		if (!name.empty())
			this->name = name;
	}
	size_t getCounter() const
	{
		return counter;
	}
	
	string getName() const
	{
		const_cast<size_t&>(counter)++;
		return name;
	}

	virtual void print() const
	{
		cout << "Name :: " << name << endl;
	}
};


class Student : public Person
{
	string specialization = "No spec";
public:
	Student() = default;
	Student(const string& name, const string& spec)
		:Person(name)
	{
		setSpecialization(spec);
	}
	void setSpecialization(const string& spec)
	{
		if (!spec.empty())
		{
			this->specialization = spec;
		}
	}

	virtual void print() const override
	{
		cout << ">>>>>>>>>>> " << typeid(*this).name() << " specialization : " << specialization << " >>> ";
		Person::print();
	}

	virtual void learn()
	{
		cout << typeid(*this).name() << " studies : " << specialization << endl;
	}

};

class Aspirant : public Student
{
	string theme = "Important theme";
public:
	Aspirant() = default;
	Aspirant(const string& name, const string& spec, const string& theme)
		:Student(name, spec)
	{
		setTheme(theme);
	}

	void setTheme(const string& theme)
	{
		if (!theme.empty())
			this->theme = theme;
	}

	void print() const override
	{
		Student::print();
		cout << "Them :: " << theme << endl;
	}

	void writeDyplom()
	{
		cout << "scientic theme " << theme << endl;
	}

};

