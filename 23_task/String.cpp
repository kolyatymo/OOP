#include "String.h"
#include <iostream>
#include <cstring>
#include <conio.h>

String::String()
	:String(80)
{
}

String::String(const size_t& size)
	:size{size}
{
	this->str = new char[this->size];
	++counter;
}


String::String(const char* str)
	
{
	this->str = nullptr;
	this->size = strlen(str) + 1;
	copyStr(this->str, str);
	++counter;
}

String::String(const String& other)
{
	this->str = nullptr;
	this->size = other.size;
	copyStr(this->str, other.str);
	++counter;
}

String::~String()
{
	if (this->str != nullptr)
	{
		delete[] this->str;
		this->str = nullptr;
		--counter;
	}
}

void String::operator=(const String& other)
{
	this->size = other.size;
	copyStr(this->str, other.str);
}

bool String::operator<(const String& other) const
{
	return std::strcmp(this->str, other.str) < 0;
}

void String::input()
{
	int c;
	size_t i = 0;
	while (true)
	{
		if (i == size - 1)
		{

		}


		c = _getch();
		if (c == 13)
			break;
		this->str[i++] = c;
	}
}

void String::print() const
{
	std::cout << this->str << std::endl;
}

char* String::concat(const char* str)
{
	size_t l1 = strlen(this->str);
	size_t l2 = strlen(str);
	size_t newSize = l1 + l2 + 1;
	char* newStr = new char[newSize];

	strcpy_s(newStr, newSize, this->str);
	strcat_s(newStr, newSize, str);
	return newStr;
}

char* String::interset(const char* str)
{
	int newSize = 0;
	for (size_t i = 0; i < strlen(this->str); i++)
	{
		for (size_t j = 0; j < strlen(str); j++)
		{
			if (this->str[i] == str[j])
			{
				newSize++;
				break;
			}
		}
	}
	char* newStr = new char[newSize + 1];
	size_t index = 0;
	for (size_t i = 0; i < strlen(this->str); i++)
	{
		for (size_t j = 0; j < strlen(str); j++)
		{
			if (this->str[i] == str[j])
			{
				newStr[index++] = this->str[i];
				break;
			}
		}
	}
	newStr[index] = '\0';
	return newStr;

}

size_t String::getCounter()
{
	return counter;
}

int String::compare(const String& str1, const String& str2)
{
	if (strcmp(str1.str, str2.str) > 0)
		return 1;
	if (strcmp(str1.str, str2.str) < 0)
		return -1;
	else
		return 0;
}

void String::sort(String* lines, const size_t size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
	    for (size_t j = 0; j < size - i - 1; j++)
	    {
	        if (lines[j + 1] < lines[j]) 
			{

	            std::swap(lines[j], lines[j + 1]);
	        }
	    }
	}
}

void String::copyStr(char*& dest, const char* source)
{
	size_t size = strlen(source);
	if(dest != nullptr)
		delete[] dest;
	dest = new char[size + 1];
	strcpy_s(dest, size + 1, source);
}
size_t String::counter = 0;
