#pragma once
#include <iostream>
#include <forward_list>
#include <algorithm>
using namespace std;

template <typename ContType>
void print(const ContType& cont, const string& prompt = "")
{
	cout << prompt << endl;
	for (auto& i : cont)
	{
		cout << i << "\t";
	}cout << endl;
}

class TestFrwList
{
public:
	void startTest() const;
};

inline void TestFrwList::startTest() const
{
	forward_list<int> fl{ 10,23,45,-1,100,-55,10,-22,10,200 };
	print(fl, "ForwardList before :: ");

	fl.push_front(5);
	print(fl, "ForwardList after push front :: ");

	auto it = fl.begin();
	int index = 2;
	advance(it, index);

	fl.insert_after(it, 55);
	print(fl, "ForwardList after insert_after :: ");

	int value = 10;
	it = find(fl.begin(), fl.end(), value);
	while (it != fl.end())
	{
		cout << value << " was found " << endl;
		auto tmpIt = it;
		++tmpIt;
		if (tmpIt != fl.end())
		{
			cout << "will be deleted :: " << *tmpIt << endl;
			fl.erase_after(it);
		}
		else
		{
			cout << "Earse after " << value << "is impossible (because it is last element)" << endl;
			break;
		}

		fl.erase_after(it);
		++it;
		it = find(it, fl.end(), value);

	}
	print(fl, "ForwardList after earse_after :: ");

	fl.sort();
	print(fl, "ForwardList sorted abs  :: ");

	fl.sort(greater<int>());
	print(fl, "ForwardList sorted desc :: ");

	fl.sort([](int a, int b) {return abs(a) < abs(b); });
	print(fl, "ForwardList sorted module number :: ");

	fl.remove(value); // delete 10
	print(fl, "ForwardList after remove :: ");

	fl.remove_if([](int a) {return a < 0;}); // delete 10
	print(fl, "ForwardList after remove :: ");

}

