#pragma once
#include "Exception.h"
using namespace std;

class Rectangle
{
public:
	Rectangle(){}

	void setLength(const size_t& length) {
		if (length < 0)
			throw NegativeLength();
		if (length == 0)
			throw zeroLength();
		cout << length << endl;
	}

	void setWigth(const size_t& wigth)
	{
		if (width < 0)
			throw NegativeWidth();
		if (width == 0)
			throw zeroWigth();
		cout << wigth << endl;
	}

	size_t getWigth()const {
		return width;
	}

	size_t getLength()const {
		return length;
	}

private:
	size_t width;
	size_t length;

};

