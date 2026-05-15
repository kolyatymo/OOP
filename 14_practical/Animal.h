#pragma once
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Animal abstract
{
public:
	void setAge(const size_t& age);
	void setName(const string& name);
	const size_t& getAge()const;
	const string& getName()const;

	virtual void sound() const;
	virtual void type() const;
	virtual void show() const;

	Animal(const string& Name = "NoName", const size_t& age = 0);


protected:
	string name;
	size_t age;
};