#include "Wolf.h"

Wolf::Wolf(const string& place, const size_t& age, const size_t& weigth)
	:Animal(place, age), weigth{weigth}
{
	std::cout << ">>>> Ctor Wolf id --> " << id << std::endl;
}

Wolf::~Wolf()
{
	std::cout << ">>>> Dtor Wolf id --> " << id << std::endl;
}

void Wolf::print() const
{
	std::cout << "_____________ Wolf ID : " << id << std::endl;
	//std::cout << "\t Age :: " << age << std::endl; // compile error - приватне поле в успадкованому класі НЕ ВИДНО
	std::cout << "\t Age   :: " << getAge() << std::endl; // compile error - приватне поле в успадкованому класі НЕ ВИДНО
	std::cout << "\t Place :: " << place << std::endl;
	std::cout << "\t Alone :: " << std::boolalpha << weigth << std::endl;
}

void Wolf::eat() const
{
	cout << " Wolf Id --> " << id << " like eat meat" << endl;

}

void Wolf::move() const
{
	cout << "Wolf can run" << endl;
}

//void BlueWolf::print() const
//{
//	std::cout << "_____________ Blue Wolf ID : " << id << std::endl;
//	Wolf::print();
//}
