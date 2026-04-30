#pragma once
#include <iostream>
using namespace std;

class Engine
{
	string model = "Nomodel";
	size_t power = 0;
	double volume = 0;
public:
	agr() = default;
	agr(const string& model, const size_t& power, const double& volume)
		:model{ model }, power{ power }, volume{ volume }
	{

	}
	void print()const {
		cout << "Model --> " << model << ""
	}
};

