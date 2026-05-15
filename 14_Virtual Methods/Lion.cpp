#include "Lion.h"

Lion::Lion(const string& place, const size_t& age, bool isAlone)
	:Animal(place, age), isAlone(isAlone)
{
	// !!! Animal() -- спочатку викликається к-р базового типу
	//this->setAge(age);
	//setPlace(place);
	//this->isAlone = isAlone;
	std::cout << ">>>> Ctor Lion id --> " << id << std::endl;

}

void Lion::print() const
{
	std::cout << "_____________ LION ID : " << id << std::endl;
	//std::cout << "\t Age :: " << age << std::endl; // compile error - приватне поле в успадкованому класі НЕ ВИДНО
	std::cout << "\t Age   :: " << getAge() << std::endl; // compile error - приватне поле в успадкованому класі НЕ ВИДНО
	std::cout << "\t Place :: " << place << std::endl;
	std::cout << "\t Alone :: " << std::boolalpha << isAlone << std::endl;
}

void Lion::eat() const
{
	cout << " Lion Id --> " << id << " like eat meat" << endl;
}

Lion::~Lion()
{
	std::cout << ">>>> Dtor Lion id --> " << id << std::endl;
}

void Lion::move() const
{
	cout << "Lion can run fast and jump" << endl;
}
