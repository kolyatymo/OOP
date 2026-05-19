#pragma once
#include <iostream>
using std::string;

class Exception
{
public:
	Exception(const string& message = " -error- ", const double& badSide = 0)
		:message{message}, badSide{ badSide }
	{}

	virtual const string& what() const
	{
		return message;
	}

	virtual const double& getValue() const
	{
		return badSide;
	}

private:
	string message;
	double badSide;
};

class NegativeWidth
	:public Exception
{
public:
	NegativeWidth(const string& message = " wigth is negative ", const double& badSide = 0)
		:Exception(message, badSide)
	{

	}
};

class NegativeLength
	:public Exception
{
public:
	NegativeLength(const string& message = " length is negative ", const double& badSide = 0)
		:Exception(message, badSide)
	{

	}
};

class zeroWigth
	:public Exception
{
public:
	zeroWigth(const string& message = " wigth is zero ", const double& badSide = 0)
		:Exception(message, badSide)
	{

	}
};

class zeroLength
	:public Exception
{
public:
	zeroLength(const string& message = " Length is zero ", const double& badSide = 0)
		:Exception(message, badSide)
	{

	}
};


