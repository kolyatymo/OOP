#include "fraction.h"
#include <iostream>

void Fraction::print() const
{
	std::cout << numerator << "/" << denominator;
}

void Fraction::abbreviation()
{
	int a = numerator, b = denominator;
	while (b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	numerator /= a;
	denominator /= a;
}

Fraction Fraction::operator+(const Fraction& other)
{
	return Fraction(
		this->numerator * other.denominator + other.numerator * this->denominator,
		this->denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other)
{
	return Fraction(
		this->numerator * other.denominator - other.numerator * this->denominator,
		this->denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other)
{
	return Fraction(this->numerator * other.numerator, this->denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other)
{
	return Fraction(this->numerator * other.denominator, this->denominator * other.numerator);
}

Fraction& Fraction::operator++()
{
	this->numerator++;
	this->denominator++;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction tmp(*this);
	++*this;
	return tmp;
}

Fraction& Fraction::operator--()
{
	this->numerator--;
	this->denominator--;
	return *this;
}

Fraction Fraction::operator--(int)
{
	Fraction tmp(*this);
	--*this;
	return tmp;
}

bool Fraction::operator==(const Fraction& other)
{
	return this->numerator == other.numerator and this->denominator == other.denominator;
}

bool Fraction::operator!=(const Fraction& other)
{
	return !(*this == other);
}

bool Fraction::operator>(const Fraction& other)
{
	return this->numerator > other.numerator and this->denominator > other.denominator;
}

bool Fraction::operator<(const Fraction& other)
{
	return this->numerator < other.numerator and this->denominator < other.denominator;
}

void Fraction::validation()
{
	if(this->denominator == 0)
	{
		std::cout << "Error write a number greater than 0 --> ";
		std::cin >> this->denominator;
	}

	if(this->denominator < 0)
	{
		this->numerator = -numerator;
		this->denominator = -denominator;
	}
}
