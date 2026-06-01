#include <iostream>
#include <array>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


template <typename ContType>
void print(const ContType& cont, const string& prompt = "")
{
	cout << prompt << endl;

	for (auto& el : cont)
	{
		cout << el << "\t";
	}cout << endl;
}

bool div_(int number)
{
	return number % 3 == 0;
}

int inc(int number)
{
	return number + 1;
	/*if (number > 0)
		return number + 2;
	else
		return number - 2;*/
}

int main()
{
    const int SIZE = 5;
    array<int, SIZE> arr{1,2,5,7,8};
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;

	for (/*array<int, SIZE>::iterator*/ auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << "\t";
	}cout << endl;

	cout << "Reverse order :: " << endl;
	for (auto it = arr.rbegin(); it != arr.rend(); it++)
	{
		cout << *it << "\t";
	}cout << endl;

	try
	{
		arr.at(5) = 100; // at виняткова ситуація
	}
	catch (const std::exception& ex)
	{
		cerr << "Bad index " << ex.what() << endl;
	}

	auto it = min_element(arr.begin(), arr.end());
	cout << "Min in array :: " << *it << endl;
	*it *= -1;
	print(arr , "\n After modifuing min(*-1) : ");
	it = max_element(arr.begin(), arr.end());
	cout << "Max in array :: " << *it << endl;
	*it *= 100;
	print(arr, "\n After modifuing max(*100) : ");



	vector<int> v(arr.rbegin(), arr.rend());
	print(v, "\n Vector (as reverse copy of arr) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;

	v.push_back(333);
	print(v, "\n Vector (after push) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;

	v.insert(v.begin() + v.size() / 2, 7777);
	print(v, "\n Vector (after insert) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;

	v.insert(v.begin() + 1, {10,20,30,40});
	print(v, "\n Vector (after insert) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;

	v.insert(v.begin(), 3,5);
	print(v, "\n Vector (after insert) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;

	v.pop_back();
	print(v, "\n Vector (after pop) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;

	v.erase(v.begin());
	print(v, "\n Vector (after erase) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;

	v.erase(v.begin(), v.begin() + 3);
	print(v, "\n Vector (after errse) : ");
	cout << "Capacity :: " << v.capacity() << endl;
	cout << "Size     :: " << v.size() << endl;


	deque<int> d(v.begin(), v.begin() + v.size() / 2);
	print(d, "\n Deque (copy 1-st hala of vector) : ");

	d.resize(v.size(), -1);
	print(d, "\n Deque (copy 1-st hala of vector) : ");
	copy(v.rbegin(), v.rend() - v.size() / 2, d.begin() + d.size() / 2);
	print(d, "\n Deque (copy 1-st hala of vector) : ");
	d.push_front(888);
	d.push_back(10);
	print(d, "\n Deque (after push front) : ");
	d.pop_front();
	print(d, "\n Deque (after pop front) : ");

	int value = 10;
	auto itF = find(d.begin(), d.end(), value);
	while (itF != end(d))
	{
		cout << "Found value " << value << " in index " << itF - begin(d) << endl;
		itF = find(itF + 1, d.end(), value);
	}

	cout << "\n Count of value " << value << " = " << count(d.begin(), d.end(), value) << endl;

	itF = find_if(d.begin(), d.end(), div_);
	if (itF != end(d))
		cout << "Div 3 " << *itF << endl;
	else
		cout << "Not found any divisable by 3" << endl;
	cout << "\n Count of div 3" << " = " << count_if(d.begin(), d.end(), div_) << endl;
	cout << "\n Count of even" << " = " << count_if(d.begin(), d.end(), [](int el) {return el % 2 == 0; }) << endl;
	cout << "\n Count of odd" << " = " << count_if(d.begin(), d.end(), [](int el) {return el % 2 != 0; }) << endl;
	cout << "\n Count of > 10" << " = " << count_if(d.begin(), d.end(), [&](int el) {return el > value; }) << endl;

	print(d, "\n Deque (before) : ");
	transform(d.begin(), d.end(), d.begin(), inc);
	print(d, "\n Deque (after) : ");


	sort(d.begin(), d.end());
	print(d, "\n Deque (after sort) : ");

	/*sort(d.rbegin(), d.rend());
	print(d, "\n Deque (after sort) : ");*/

	sort(d.begin(), d.end(), greater<int>());
	print(d, "\n Deque (after sort) : ");

	cout << " ====== lambda ======" << endl;

	auto func = [](int a, int b, int c) -> double {
		double res = (double)a + b + c;
		return res / 3;
		};
	cout << "func(2,3,11) --> " << func(2, 3, 11) << endl;
	cout << "TypeID :: " << typeid(func).name() << endl;

	print(d, "\n Deque (before) : ");
	//transform(d.begin(), d.end(), d.begin(), [](int el) {return el * 2; });
	print(d, "\n Deque (after transform) : ");
	transform(d.begin(), d.end(), d.begin(), [](int el) {return el % 2 == 0 ? el * -1 : el; });
	print(d, "\n Deque (after transform) : ");

	sort(d.begin(), d.end(), [](int a, int b) {return abs(a) < abs(b); }); // abs - повернення по модулю (без знака)
	print(d, "\n Deque (after sort) : ");

}

