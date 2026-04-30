#pragma once


class MyArray
{
public:
	MyArray(); // default (lenngth arry = 1)
	MyArray(const size_t& size); // 1 params
	MyArray(const size_t& size, const int& value);
	MyArray(const MyArray& other);
	void operator =(const MyArray& other);
	~MyArray();

	size_t getSize() const;
	void print() const;

	int operator[](size_t index) const; // read
	int& operator[](size_t index); // write

	MyArray operator()(size_t startIndex, size_t lastIndex) const;

	explicit operator int() const;


private:
	bool isValidIndex(size_t index) const;
	int* arr = nullptr;
	size_t size = 0;


};

inline size_t MyArray::getSize() const
{
	return size;
}

inline bool MyArray::isValidIndex(size_t index) const
{
	return index < size;
}