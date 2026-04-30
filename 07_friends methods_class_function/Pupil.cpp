#include "Pupil.h"

Pupil::Pupil(const std::string& name, const size_t& math, const size_t& english)
	:name{name}, math{math},english{english}
{
}

void Pupil::print() const
{
	std::cout << "Name    --> " << name << std::endl;
	std::cout << "Math    --> " << math << std::endl;
	std::cout << "English --> " << english << std::endl;
}

void Teacher::setMarkMath(Pupil& pupil, size_t math)
{
	pupil.math = math;
}

void Teacher::setMarkEnglish(Pupil& pupil, size_t english)
{
	pupil.english = english;
}

std::ostream& operator<<(std::ostream& out, const Pupil& obj)
{
	out << obj.name << "("<< obj.math << ", " << obj.english << ")" << "\n";

	return out;
}

std::istream& operator>>(std::istream& in, Pupil& obj)
{
	in >> obj.name >> obj.math >> obj.english;
	return in;
}