#include "Array.h"
#include <iostream>

template<typename T>
size_t Array<T>::GetSize() const
{
	return size;
}

template<typename T>
void Array<T>::SetSize(int newSize)
{
	if (newSize <= capacity)
	{
		return size = newSize;
	}

	size_t newCapacity = capacity;

	if (newCapacity < newSize)
		newCapacity += grow;

	T* arr2 = new T[newCapacity];

	for (size_t i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
	delete[] arr;
	arr = arr2;
	capacity = newCapacity;
	size = newSize;

}


template<typename T>
T& Array<T>::GetUpperBound()
{
	return size - 1;
}

template<typename T>
bool Array<T>::empty() const
{
	return size == 0;
}

template<typename T>
void Array<T>::FreeExtra()
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

template<typename T>
void Array<T>::Removeall()
{
	delete[]arr;
	arr = nullptr;

	size = 0;
	capacity = 0;
}
template<typename T>
T& Array<T>::operator[](size_t index)
{
	return arr[index];
}

template<typename T>
T& Array<T>::GetAt(const size_t index)
{
	return (*this)[index];
}

template<typename T>
T& Array<T>::SetAt(const T& element, const size_t index)
{
	if (index > size)
		return;

	arr[index] = element;
	return arr[index];
}

template<typename T>
void Array<T>::Add(const T& element)
{
	arr[++size] = element;
}

template<typename T>
T& Array<T>::InsertAt(const T& element, const size_t index)
{
	if (index > size)
		return;

	arr[index] = element;
	return arr[index];
}

template<typename T>
void Array<T>::RemoveAt(const size_t index)
{
	if (index > size)
		return;

	for (size_t i = index; i < size-1; i++)
	{
		arr[i] = arr[i + 1];
	}
	--size;
}

