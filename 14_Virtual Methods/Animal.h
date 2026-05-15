#pragma once
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Animal abstract
{
public:
	void setAge(const size_t& age);
	void setPlace(const string& place);
	const size_t& getAge()const;
	const string& getPlace()const;

	virtual void print() const;
	virtual void eat() const;
	virtual void move() const = 0;
	Animal(const string& place = "NoPlace", const size_t& age = 0);
	~Animal();

private:
	size_t age;
	static size_t latsId;

protected:
	size_t id;
	string place;
};

