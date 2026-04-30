#include "MyArray.h"
#include <iostream>
using std::cout;
using std::endl;

MyArray::MyArray()
	:MyArray(1)
{
}

MyArray::MyArray(const size_t& size)
{
	this->size = size;
	this->arr = new int[size] {};
}

MyArray::MyArray(const size_t& size, const int& value)
	:MyArray(size)
{
	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = value;
	}
}

MyArray::MyArray(const MyArray& other)
	:MyArray(other.size)
{
	/*this->arr = new int[other.size];
	this->size = other.size;*/

	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

void MyArray::operator=(const MyArray& other)
{
	if (this->arr != nullptr)
		delete[] this->arr;
	this->size = other.size;
	this->arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		this->arr[i] = other.arr[i];
	}
}

MyArray::~MyArray()
{
	if (this->arr != nullptr)
		delete[] this->arr;
}

void MyArray::print() const
{
	cout << "\n Array has " << size << " elements(s); \n";
	for (size_t i = 0; i < size; i++)
	{
		cout << this->arr[i] << "\t";
	}
	cout << endl;

}

int MyArray::operator[](size_t index) const
{
	if (isValidIndex(index))
		return arr[index];
	cout << " >>>>>>> Error index (get) " << index << endl;
	return INT_MIN;
}

int& MyArray::operator[](size_t index) // set
{
	if (isValidIndex(index))
		return arr[index];
	static int errValue;
	cout << " >>>>>>> Error index (set) " << index << endl;
	return errValue;
	
}

MyArray MyArray::operator()(size_t startIndex, size_t lastIndex) const
{
	if (startIndex >= size)
		return MyArray(0);
	if (lastIndex >= size)
		lastIndex = size - 1;
	if (startIndex > lastIndex)
		std::swap(startIndex, lastIndex);

	MyArray tmp(lastIndex - startIndex + 1);
	for (size_t i = 0; i < tmp.size; i++)
	{
		//tmp.arr[i] = arr[i + startIndex];
		tmp[i] = arr[i + startIndex];
	}
	return tmp;

	
}

MyArray::operator int() const
{
	int sume = 0;
	for (size_t i = 0; i < size; i++)
	{
		sume += arr[i];
	}
	return sume;
}
