#include <iostream>
#include <string>
using namespace std;

class Fraction
{
	int numerical;
	int denominator;

public:
	void inpu()
	{
		cout << "Enter the numerator and denominator  --> ";
		cin >> numerical >> denominator;
	}
	void print()
	{
		cout << numerical << "/" << denominator << endl;
	}
	
	Fraction operator+(const Fraction& frac)
	{		
		Fraction tmp;
		tmp.numerical = this->numerical* frac.denominator + frac.numerical * this->denominator;
		tmp.denominator = this->denominator * frac.denominator;
		return tmp;
	}

	Fraction operator-(const Fraction& frac)
	{
		Fraction tmp;
		tmp.numerical = this->numerical* frac.denominator - frac.numerical * this->denominator;
		tmp.denominator = this->denominator* frac.denominator;
		return tmp;
	}

	Fraction operator*(const Fraction& frac)
	{
		Fraction tmp;
		tmp.numerical = this->numerical * frac.numerical;
		tmp.denominator = this->denominator * frac.denominator;
		return tmp;
	}

	Fraction operator/(const Fraction& frac)
	{
		Fraction tmp;
		tmp.numerical = this->numerical * frac.denominator;
		tmp.denominator = this->denominator * frac.numerical;
		return tmp;
	}
};



int main()
{
	Fraction frac1, frac2;
	frac1.inpu();
	frac2.inpu();
	
	frac1.print();
	frac2.print();

	
	Fraction res;

	

	int choice;
	cout << "1 - (+); 2 - (-); 3 - (*); 4 - (/) --> ";
	cin >> choice;

	switch (choice)
	{

	case 1:
	{
		res = frac1 + frac2;
		break;
	}
	case 2:
	{
		res = frac1 - frac2;
		break;
	}
	case 3:
	{
		res = frac1 * frac2;
		break;
	}
	case 4:
	{
		res = frac1 / frac2;
		break;
	}
	default:
		break;
	}

	res.print();
}


