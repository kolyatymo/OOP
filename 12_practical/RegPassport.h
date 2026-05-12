#pragma once
#include "Passport.h"


class RegPassport : public Passport
{
public:
	RegPassport(const string& name = "noName", const string& surname = "noSurname", const string& country = "noCountry", const size_t& number = 0, const size_t& passportNumber = 0, const string& visa = "noVisa");

	void print() const;

private:
	size_t passportNumber;
	string visa;
};

