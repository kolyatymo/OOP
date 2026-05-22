#pragma once
#include <iostream>
using namespace std;

class AutoException
{
public:
	AutoException(const string& message = " -error- ", const double& badSpead = 0)
		:message{message}, badSpead{badSpead}
	{}

	virtual const string& what() const
	{
		return message;
	}

	virtual const double& getValue() const
	{
		return badSpead;
	}

private:
	string message;
	double badSpead;
};

class WrongSpeadException : public AutoException
{
public:
	WrongSpeadException(const string& messadge = " max spead!!! ", const double& badSpead = 0)
		:AutoException(messadge, badSpead)
	{

	}

};

class WrongMaxSpeadException : public AutoException
{
public:
	WrongMaxSpeadException(const string& messadge = " speed is more than max!!! ", const double& badSpead = 0)
		:AutoException(messadge, badSpead)
	{

	}

};

class InvalidNumberException : public AutoException
{
public:
	InvalidNumberException(const string& messadge = " number is incorrect!!! ", const double& badSpead = 0)
		:AutoException(messadge, badSpead)
	{

	}

};

