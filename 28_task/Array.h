#pragma once
#include <iostream>

template <typename T = int>
class Array
{
public:

	Array(size_t capacity_ = 0, size_t grow_step = 5)
	{
		size = 0;
		capacity = capacity_;
		grow = grow_step;

		arr = new T[capacity];
	};

	~Array()
	{
		delete[] arr;
	};


	void print() const
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}


	size_t GetSize() const
	{
		return size;
	}

	void SetSize(int newSize)
	{
		if (newSize <= capacity)
		{
			size = newSize;
			return;
		}

		size_t newCapacity = capacity;

		while (newCapacity < newSize)
		{
			newCapacity += grow;
		}
		T* arr2 = new T[newCapacity];

		for (size_t i = 0; i < size; i++)
		{
			arr2[i] = arr[i];
		}
		delete[] arr;
		arr = arr2;
		capacity = newCapacity;
		size = size;

	}

	T& GetUpperBound()
	{
		return arr[size - 1];
	}

	bool empty() const
	{
		return size == 0;
	}

	void FreeExtra()
	{
		if (capacity == size)
			return;

		T* arr2 = new T[size];

		for (size_t i = 0; i < size; i++)
		{
			arr2[i] = arr[i];
		}
		delete[] arr;
		arr = arr2;

		capacity = size;
	}

	void Removeall()
	{
		delete[]arr;
		arr = nullptr;

		size = 0;
		capacity = 0;
	}

	T& operator[](size_t index)
	{
		return arr[index];
	}

	T& GetAt(const size_t index)
	{
		return (*this)[index];
	}

	T& SetAt(const T& element, const size_t index)
	{
		if (index >= size)
			return arr[0];

		arr[index] = element;
		return arr[index];
	}

	void Add(const T& element)
	{
		if(size >= capacity)
			SetSize(capacity + grow);

		arr[size++] = element;
	}

	T& InsertAt(const T& element, const size_t index)
	{
		if (index > size)
			return arr[0];

		arr[index] = element;
		return arr[index];
	}

	void RemoveAt(const size_t index)
	{
		if (index > size)
			return;

		for (size_t i = index; i < size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		--size;
	}

	void GetData(T* dest) const
	{
		for (size_t i = 0; i < size; i++)
		{
			dest[i] = arr[i];
		}
	}

	Array& operator =(const Array& other)
	{
		if (this == &other)
			return *this;


		T* arr2 = new T[other.capacity];

		for (size_t i = 0; i < other.size; i++)
		{
			arr2[i] = other.arr[i];
		}

		delete[] arr;

		arr = arr2;
		size = other.size;
		capacity = other.capacity;
		grow = other.grow;

		return *this;
	}


private:
	T* arr = nullptr;
	size_t size = 0;
	size_t grow = 5;
	size_t capacity = 0;

};



