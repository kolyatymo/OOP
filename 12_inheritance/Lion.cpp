#include "lion.h"

Lion::Lion(const string& place, const size_t& age, bool isAlone)
	:Animal(place, age), isAlone(isAlone)
{
	
	// !!! Animal() -- спочатку викликається конструктор базового типу
	/*this->setAge(age);
	this->setPlace(place);
	this->isAlone = isAlone;*/
	std::cout << ">>>> Ctor Lion id --> " << id << std::endl;
}

void Lion::print() const
{
	std::cout << "______________ Lion ID : " << id << std::endl;
	std::cout << " Age   :: " << getAge() << std::endl;
	std::cout << " Place :: " << place << std::endl;
	std::cout << " Alone :: " << std::boolalpha << isAlone << std::endl;
}

Lion::~Lion()
{
	std::cout << ">>>> Dtor Lion id --> " << id << std::endl;
}
