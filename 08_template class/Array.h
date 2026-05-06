#pragma once
#include <iostream>
using std::cout;
using std::endl;



template <typename T = int, size_t size = 5> // typename або class
class Array
{
public:
	Array(const T& value = T());
	void print() const;
	void fill(const T& value = T());

	const size_t& getSize() const;
	T& operator[](size_t index);



private:
	T arr[size]{};
	template <typename T, size_t size>
	friend std::ostream& operator<<(std::ostream& out, Array<T, size> obj);

};

template<typename T, size_t size>
inline Array<T, size>::Array(const T& value)
{
	fill(value);
}

template<typename T, size_t size>
inline void Array<T, size>::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T, size_t size>
inline void Array<T, size>::fill(const T& value)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = value;
	}
}

template<typename T, size_t size>
inline const size_t& Array<T, size>::getSize() const
{
	return size;
}

template<typename T, size_t size>
inline T& Array<T, size>::operator[](size_t index)
{
	if (index < size)
		return arr[index];

	static T error;
	cout << "\t Error index :: operator []";
	return error;
}


template<typename T, size_t size>
inline std::ostream& operator<<(std::ostream& out, Array<T, size> obj)
{
	for (size_t i = 0; i < size; i++)
	{
		out << obj[i] << (i < size - 1 ? "," : "\n");
	}
	return out;
}
