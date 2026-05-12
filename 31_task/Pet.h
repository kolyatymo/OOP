#pragma once
#include <iostream>
using std::string;

class Pet
{
public:
	void setHabitat(const string& habitat);
	void setName(const string& name);
	void setFeeding(const string& feeding);
	void setMovement(const string& movement);
	void setAge(const size_t& age);

	const string& getHabitat()const;
	const string& getName()const;
	const string& getFeeding()const;
	const string& getMovement()const;
	const size_t& getAge()const;

	Pet(const string& habitat = "NoHabitat", const string& name = "NoName", const string& feeding = "Nofeeding", const string& hmovement = "NoMovement", const size_t& age = 0);

	void print()const;

private:
	string habitat;
	string feeding;
	size_t age;
	
	static size_t lastNumber;

protected:

	string name;
	string movement;
	size_t number;

};

