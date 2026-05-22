#pragma once
#include "AutoExceptin.h"

class Auto
{
public:
	Auto(const string& number, const size_t& spead)
	{
		setSpead(spead);
		setNumb(number);
	}

	void setNumb(const string& number)
	{
		if (!checkNumb(number))
			throw InvalidNumberException();
		this->number = number;
	}
	
	void setSpead(const size_t& spead)
	{
		if (spead > maxSpead)
			throw WrongSpeadException();
		this->spead = spead;
	}

	const size_t& getMaxSpead()const
	{
		return maxSpead;
	}

	const string& getNumber() const 
	{
		return this->number;
	}

	const size_t& getSpead() const
	{
		return this->spead;
	}

	void moreSpead(const size_t& spead = 5) 
	{
		if (this->spead + spead > maxSpead)
			throw WrongSpeadException();
		this->spead += spead;
	}
	void lessSpeed(const size_t& spead = 5)
	{
		if (this->spead - spead < 0)
			this->spead = 0;
		this->spead -= spead;
	}



protected:
	string number;
	static const size_t maxSpead = 360;
	size_t spead;

	bool checkNumb(const string& number);

};

