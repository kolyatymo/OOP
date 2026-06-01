#pragma once
#include "TestFrwList.h"
#include <list>


class TestList
{
public:
	void test_list() const;
};

inline void TestList::test_list() const
{
	list<string> li{"c++", "java", "c#", "python"};
	print(li, "Print list :: ");

	li.push_back("js");
	li.push_front("assembler");
	print(li, "Print list after push :: ");

	cout << "\n List in reverse order :: " << endl;
	for (auto i = li.rbegin(); i != li.rend(); i++)
	{
		cout << *i << "\t";
	}cout << endl;

	char letter = 'c';

	li.remove_if([letter](string el) {return el.find(letter) != string::npos; });
	print(li, "Print list after remove_if :: ");

	li.sort(); // сорт відбувається по таблиці символів
	print(li, "Print list after sort :: ");
	li.sort(greater<string>());
	print(li, "Print list after sort :: ");
	li.sort([](string a, string b) {return a.size() < b.size();});
	print(li, "Print list after sort :: ");

	list<string> li2{ "ms sql", "mysgl" };
	li.resize(li.size() + li2.size());
	li2.sort();
	/*li.merge(li2, greater<string>());
	print(li, "Print list after merge :: ");*/

}