#pragma once
class Fraction
{
public:

	Fraction() = default;
	Fraction(const int& numerator);
	Fraction(const int& numerator, const int& denominator);

	void setNumerator(const int& numerator);
	void setDenominator(const int& denominator);
	void print() const;

	void abbreviation();


	Fraction operator +(const Fraction& other);
	Fraction operator -(const Fraction& other);
	Fraction operator *(const Fraction& other);
	Fraction operator /(const Fraction& other);
	Fraction& operator ++();
	Fraction operator ++(int);
	Fraction& operator --();
	Fraction operator --(int);
	bool operator ==(const Fraction& other);
	bool operator !=(const Fraction& other);
	bool operator >(const Fraction& other);
	bool operator <(const Fraction& other);

	void validation();

private:
	int numerator = 0, denominator = 1;
};

inline Fraction::Fraction(const int& numerator)
	:Fraction(numerator, 1){}

inline Fraction::Fraction(const int& numerator, const int& denominator)
	:numerator{ numerator }, denominator{ denominator }{
	if (this->numerator < this->denominator)
		{
		int tmp = this->numerator;
		this->numerator = this->denominator;
		this->denominator = tmp;
	}
}

inline void Fraction::setNumerator(const int& numerator)
{
	this->numerator = numerator;
}

inline void Fraction::setDenominator(const int& denominator)
{
	this->denominator = denominator;
}
