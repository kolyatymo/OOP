#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	void setName(const string& name);
	void setCollege(const string& college);

	const string& getName()const;
	const string& getCollege()const;


	void print() const;

	Student(const string& name = "noName", const string& college = "nocollege", const string& group = "noGroup", const size_t& age = 0);

protected:
	size_t id;
	string group;
	size_t age;


private:
	string name;
	string college;
	

	static size_t lastID;
	
};

