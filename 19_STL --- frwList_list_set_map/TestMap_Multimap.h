#pragma once
#include <iostream>
#include <map> // лише унікальні ключi
using namespace std;

//typedef size_t id // c-style
using id = size_t;
using name = string;

void printMap(map<id, name> people)
{
	for (auto& i : people)
	{
		cout << "ID :: " << i.first << "\t Name :: " << i.second << endl;
	}cout << endl;
}

class TestMap_Multimap
{
public:
	void test() const;
};

inline void TestMap_Multimap::test() const
{
	map<id, name> people
	{
		// 3 способи 
		{222, "Olena"}, // 1 - найкращий
		pair<id, name>(55,"Anna"), // 2
		make_pair(777,"Tom") // 3
	};
	printMap(people);
	people.insert({ 333, "Ivan" });
	people.insert({ 333, "Den" });
	printMap(people);

	//cout << people[111] << endl;

	people[111] = "Matviy";
	people[333] = "Pavlo";

	//cout << people[1000] << endl;

	try
	{
		cout << people.at(1000) << endl; // exc
	}
	catch (const std::exception&)
	{
		cout << "Error" << endl;
	}

	printMap(people);

	for (auto i = people.rbegin(); i != people.rend(); i++)
	{
		cout << i->first << " :: " << i->second << endl;
	}

	people.erase(333);
	printMap(people);

	people.erase(people.begin());
	printMap(people);

	auto it = find_if(people.begin(), people.end(), [](auto el) {return el.second == "Tom";});
	cout << it->first << " :: " << it->second << endl;

	people.erase(it);
	printMap(people);



}
