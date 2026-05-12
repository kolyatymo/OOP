#pragma once
#include <iostream>
using std::string;



class Animal
{
public:
	void setAge(const size_t& age);
	void setPlace(const string& place);
	const size_t& getAge()const;
	const string& getPlace()const;

	void print() const;
	Animal(const string& place = "NoPlace", const size_t& age = 0);
	~Animal();

private:
	size_t age;
	static size_t latsId;

protected:
	size_t id;
	string place;
};

