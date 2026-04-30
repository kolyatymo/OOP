#pragma once
#include <iostream>
using std::cout;
using std::endl;

class Vector
{
	int* buffer = nullptr;
	size_t capacity = 0;
	size_t size = 0;
	size_t grow = 2;
	void setCapacity()
	{
		this->capacity += grow;
		grow *= 2;
	}

	bool full() const;

public:
	Vector() = default;
	
	Vector(const size_t& size)
		:capacity{ size * 2 }, size{ size }
	{
		buffer = new int[capacity] {};
	}
	
	void resize(size_t newSize, int value = 0);

	Vector(const size_t& size, const int& value)
		:Vector(size)
	{
		for (size_t i = 0; i < size; i++)
		{
			buffer[i] = value;
		}
	}

	Vector(const Vector& other)
		:capacity{ other.capacity }, size{ other.size }
	{
		buffer = new int[capacity] {};
		for (size_t i = 0; i < size; i++)
		{
			buffer[i] = other.buffer[i];
		}
	}

	~Vector()
	{
		delete[] buffer;
	}

	bool empty() const;

	void setValue(int index, int value);

	void readByindex(int index) const;



	void push(const int& value);

	void pop();

	int &front()
	{
		int static errorFront = 0;
		if(empty())
			return errorFront;
		return buffer[0];
	}

	int &back()
	{
		int static errorBack = 0;
		if (empty())
			return errorBack;
		return buffer[size - 1];
	}

	void insert(size_t index, const int& value)
	{
		if (index > size)
			return;
		if (full())
		{
			setCapacity();
			resize(capacity);
		}
		for (size_t i = size; i > index; i--)
		{
			buffer[i] = buffer[i - 1];
		}
		buffer[index] = value;
		size++;
	}

	void erase(size_t index)
	{
		if (index >= size)
			return;
		for (size_t i = index; i < size - 1; i++)
		{
			buffer[i] = buffer[i + 1];
		}
		size--;
	}

	void clear()
	{
		size = 0;
	}

	void reserve(size_t newCapacity)
	{
		if (newCapacity < capacity)
			return;
		auto tmp = new int[newCapacity];
		for (size_t i = 0; i < size; i++)
		{
			tmp[i] = buffer[i];
		}
		delete[] buffer;
		buffer = tmp;
		capacity = newCapacity;
	}


	void print() const
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << buffer[i] << endl;
		}
		cout << endl;
	}

};

inline bool Vector::empty() const
{
	return size == 0;
}

inline void Vector::setValue(int index, int value)
{
	if(index < size)
		buffer[index] = value;
}

inline void Vector::readByindex(int index) const
{
	if (index < size)
		cout << buffer[index] << endl;
}

inline bool Vector::full() const
{
	return size == capacity;
}

