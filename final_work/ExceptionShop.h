#pragma once
#include <iostream>
using std::string;

class ExceptionShop
{
public:
	ExceptionShop(const string& message = " -error- ", const double& bad = 0)
		:message{ message }, bad{ bad }
	{}

	virtual const string& what() const
	{
		return message;
	}

	virtual const double& getValue() const
	{
		return bad;
	}

private:
	string message;
	double bad;
};

class NegativeExchangeCoinINStone
	:public ExceptionShop
{
public:
	NegativeExchangeCoinINStone(const string& message = " You can exchange only a multiple of 2 coins for stone!!! ", const double& bad = 0)
		:ExceptionShop(message, bad)
	{

	}
};

class NegativeExchangeCoinINGold
	:public ExceptionShop
{
public:
	NegativeExchangeCoinINGold(const string& message = " You can exchange only a multiple of 4 coins for gold!!! ", const double& bad = 0)
		:ExceptionShop(message, bad)
	{

	}
};

class NegativeExchangeCoinINDiamont
	:public ExceptionShop
{
public:
	NegativeExchangeCoinINDiamont(const string& message = " You can exchange only a multiple of 6 coins for diamont!!! ", const double& bad = 0)
		:ExceptionShop(message, bad)
	{

	}
};


class NegativeExchangeWoodINCoin
	:public ExceptionShop
{
public:
	NegativeExchangeWoodINCoin(const string& message = " You can exchange only a multiple of 2 woods for coins!!! ", const double& bad = 0)
		:ExceptionShop(message, bad)
	{

	}
};


