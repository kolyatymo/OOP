#pragma once

class Increment
{
	public:
	Increment& operator++()
	{
		this->increment++;
		return *this;
	}

	Increment operator++(int)
	{
		Increment tmp = *this;
		this->increment++;
		return tmp;
	}
	private:
	size_t increment;
};

