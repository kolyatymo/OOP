#pragma once
#include <ctime>

class MyString
{
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& other);

	MyString operator *(const MyString& other) const;
	MyString operator /(const MyString& other) const;
	MyString operator +(const MyString& other) const;
	MyString operator ++();


	~MyString();

private:
	char* str;
	size_t size = 0;
};
