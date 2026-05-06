#pragma once
#include <ctime>

class MyString
{
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& other);

	const char* getStr() const;

	MyString operator *(const MyString& other) const;
	MyString operator /(const MyString& other) const;
	MyString operator +(const MyString& other) const;
	MyString operator ++();
	MyString operator --();
	bool operator <(const MyString& other) const;
	bool operator >(const MyString& other) const;
	bool operator <=(const MyString& other) const;
	bool operator >=(const MyString& other) const;
	bool operator ==(const MyString& other) const;
	bool operator !=(const MyString& other) const;
	MyString operator !() const;

	void copyStr(char*& dest, const char* source);

	bool isContains(const char* str, char symbol) const;


	~MyString();

private:
	char* str;
	size_t size = 0;
};
