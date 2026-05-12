#include "RegPassport.h"
#include "Passport.h"

RegPassport::RegPassport(const string& name, const string& surname, const string& country, const size_t& number, const size_t& passportNumber, const string& visa)
	: Passport(name, surname, country, number), passportNumber(passportNumber), visa(visa)
{
}

void RegPassport::print() const
{
	cout << "RegPassport Name    --> " << getName() << endl;
	cout << "RegPassport Surname --> " << getSurname() << endl;
	cout << "RegPassport Country --> " << country << endl;
	cout << "RegPassport Number  --> " << number << endl;
	cout << "RegPassport Number --> " << passportNumber << endl;
	cout << "RegPassport Visa   --> " << visa << endl;
}
