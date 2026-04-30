#include "Vector.h"
void Vector::push(const int& value)
{
	if (size == capacity)
	{
		size_t newCapacity;
		if (capacity == 0)
			newCapacity = 1;
		else
			newCapacity = capacity * 2;

		reserve(newCapacity);
	}


	this->buffer[size++] = value;
}


void Vector::pop()
{
	if (!empty())
		size--;
}

void Vector::resize(size_t newSize, int value)
{
	if (newSize > capacity)
		reserve(newSize);

	
	for (size_t i = size; i < newSize; i++)
	{
		buffer[i] = value;
	}

	size = newSize;
}

