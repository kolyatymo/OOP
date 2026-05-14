#pragma once
#include <iostream>
using std::string;

class Studentt
{
public:
	Studentt(const string& name = "Noname", const string& specialization = "NoSpec");
	~Studentt();

	void print()const;

protected:
	string name;
	string specialization;
};


