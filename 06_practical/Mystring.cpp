#include "Mystring.h"
#include <iostream>
#include <cstring>
using namespace std;

MyString::MyString()
{
	str = nullptr;
	size = 0;
}

MyString::MyString(const char* str)
{
	this->size = strlen(str) + 1; 
	this->str = new char[this->size];
	strcpy_s(this->str, this->size, str);
}

MyString::MyString(const MyString& other)
{
	this->str = nullptr;
	this->size = other.size;
	copyStr(this->str, other.str);
}

const char* MyString::getStr() const
{
	return str;
}

MyString MyString::operator*(const MyString& other) const
{
	int line1 = strlen(this->str);
	int line2 = strlen(other.str);
	int newSize = line1 + line2 + 1;
	char* newStr = new char[newSize];
	int q = 0;

	for (size_t i = 0; i < line1; i++)
	{
		if (isContains(other.str, this->str[i]))
			newStr[q++] = this->str[i];
	}
	newStr[q] = '\0';
	return newStr;
}

MyString MyString::operator/(const MyString& other) const
{
	int line1 = strlen(this->str);
	int line2 = strlen(other.str);
	int newSize = line1 + 1;
	char* newStr = new char[newSize];

	int q = 0;

	for (size_t i = 0; i < line1; i++)
	{
		if (!isContains(other.str, this->str[i]))
			newStr[q++] = this->str[i];
	}
	newStr[q] = '\0';
	return newStr;
}



MyString MyString::operator+(const MyString& other) const
{
	int len1 = strlen(this->str);
	int len2 = strlen(other.str);
	int newSize = len1 + len2 + 1;
	char* newStr = new char[newSize];
	
	strcpy_s(newStr, newSize, this->str);
	strcat_s(newStr, newSize, other.str);
	return newStr;
}

MyString MyString::operator++()
{
	for (size_t i = 0; i < strlen(this->str); i++)
	{
		if (this->str[i] == 'z')
			this->str[i] = 'a';
		else if (this->str[i] == 'Z')
			this->str[i] = 'A';
		else
			this->str[i]++;
	}
	return *this;
}

MyString MyString::operator--()
{
	for (size_t i = 0; i < strlen(this->str); i++)
	{
		if (this->str[i] == 'a')
			this->str[i] = 'z';
		else if (this->str[i] == 'A')
			this->str[i] = 'Z';
		else
			this->str[i]--;
	}
	return*this;
}

bool MyString::operator<(const MyString& other) const
{
	for (size_t i = 0; i < this->size && i < other.size; i++)
	{
		if (this->str[i] < other.str[i])
			return true;
		else if (this->str[i] > other.str[i])
			return false;
	}

	return this->size < other.size;
}

bool MyString::operator>(const MyString& other) const
{
	return !this->operator<(other);
}

bool MyString::operator<=(const MyString& other) const
{
	for (size_t i = 0; i < this->size && i < other.size; i++)
	{
		if (this->str[i] <= other.str[i])
			return true;
		else if (this->str[i] > other.str[i])
			return false;
	}

	return this->size < other.size;
}

bool MyString::operator>=(const MyString& other) const
{
	return !this->operator<=(other);
}

bool MyString::operator==(const MyString& other) const
{
	for (size_t i = 0; i < this->size && i < other.size; i++)
	{
		if (this->str[i] == other.str[i])
			return true;
		else if (this->str[i] != other.str[i])
			return false;
	}

	return this->size < other.size;
}

bool MyString::operator!=(const MyString& other) const
{
	return !this->operator==(other);
}

MyString MyString::operator!() const
{
	MyString tmp;
	tmp.size = this->size;
	tmp.str = new char[tmp.size + 1];
	for (size_t i = 0; i < tmp.size - 1; i++)
	{
		tmp.str[i] = this->str[tmp.size - 2 - i];
	}
	tmp.str[this->size - 1] = '\0';
	return tmp;
}


MyString::~MyString()
{
}

void MyString::copyStr(char*& dest, const char* source)
{
	size_t size = strlen(source);
	if (dest != nullptr)
		delete[] dest;
	dest = new char[size + 1];
	strcpy_s(dest, size + 1, source);
}

bool MyString::isContains(const char* str, char symbol) const
{
	int len = strlen(str);
	for (size_t i = 0; i < len; i++)
	{
		if (symbol == str[i])
			return true;
	}
	return false;
}
