#pragma once
#include <iostream>

class Pupil;

class Teacher {
public:
	void setMarkMath(Pupil& pupil, size_t math);
	void setMarkEnglish(Pupil& pupil, size_t english);
};


class Pupil
{
public:
	Pupil() = default;
	Pupil(const std::string& name, const size_t& math = 0, const size_t& english = 0);
	void print() const;
private:
	std::string name = "Noname";
	size_t math = 0;
	size_t english = 0;
	//friend void Teacher::setMarkMath(Pupil& pupil, size_t math);
	//friend void Teacher::setMarkEnglish(Pupil& pupil, size_t english);

	friend class Teacher;
	friend double avg(const Pupil& pupil);
	
	friend std::ostream& operator<<(std::ostream& out, const Pupil& obj); // cout << obj
	friend std::istream& operator>>(std::istream& in, Pupil& obj); // cin >> obj
};

inline double avg(const Pupil& pupil) {

	return (pupil.math + pupil.english) / 2.0;
}
