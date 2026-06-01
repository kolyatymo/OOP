#pragma once
#include "TestFrwList.h"
#include <set>


class Test_multiset_set
{
public:
	void startTest() const;
};

inline void Test_multiset_set::startTest() const
{
	multiset<int> ms{ 10,22,10,22,33,-33,100,200,100,1,100 };
	//multiset<int, greater<int>> ms{10,22,10,22,33,-33,100,200,100,1,100}; // порядок спадання
	print(ms, "Print multiset conteiner :: ");

	ms.insert(77);
	print(ms, "Print multiset conteiner :: ");

	for (auto i = ms.begin(); i != ms.end(); i++)
	{
		cout << *i << "\t";
	}cout << endl;

	for (auto i = ms.rbegin(); i != ms.rend(); i++)
	{
		cout << *i << "\t";
	}cout << endl;

	cout << "Min :: " << *ms.begin() << endl;
	cout << "Max :: " << *ms.rbegin() << endl;

	cout << "\n Count of key 100 :: " << ms.count(100) << endl;

	//ms.erase(100);
	//print(ms, "Print multiset conteiner :: ");

	//auto it = ms.find(22); // ms.erase(it) - видалення одного елемента
	//ms.erase(it, ms.end()); // видалення всіх елементів після знайденного
	//print(ms, "Print multiset conteiner :: ");

	// set - unique

	set<int> s(ms.begin(), ms.end()); // set - лише унікальні значення
	print(s, "Print set conteiner :: ");
	s.insert(100);
	print(s, "Print set conteiner :: ");

	set<int> s2{ 100, 55,77,88,300,100 };
	print(s2, "Print set conteiner :: ");

	cout << "\n----------------- UNION ----------------\n" << endl; // обєднання двох контейнерів
	ostream_iterator<int> outIt(cout, "\t");
	set_union(s.begin(), s.end(), s2.begin(), s2.end(), outIt);

	cout << "\n----------------- INTERSECTION ----------------\n" << endl; // збирає значення які є в двох контейнерах
	set_intersection(s.begin(), s.end(), s2.begin(), s2.end(), outIt);
	
	cout << "\n----------------- DIFERENCE (s1 - s2) ----------------\n" << endl; // вибирає значення які є в першому а в другому відсутні
	set_difference(s.begin(), s.end(), s2.begin(), s2.end(), outIt);
	
	cout << "\n----------------- DIFERENCE (s2 - s1) ----------------\n" << endl; // вибирає значення які є в другому а в першому відсутні
	set_difference(s2.begin(), s2.end(), s.begin(), s.end(), outIt);


}