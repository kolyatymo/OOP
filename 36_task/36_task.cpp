#include <iostream>
#include <vector>
#include <ctime>
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

int div_(int numb)
{
	return numb / 2;
}


int main()
{
	// (1) 

	cout << "\n-------- (1) ---------\n";

	vector<int> v1;
    vector<int> v2(10, 0);
	vector<int> v3;
	vector<int> v4;
	vector<int> v5;

	srand(time(0));

	size_t v1Size;

	cout << "size v1 --> ";
	cin >> v1Size;

	for (size_t i = 0; i < v1Size; i++)
	{
		int x;
		cout << " Enter elements v1 --> ";
		cin >> x;

		v1.push_back(x);

	}

	size_t v3Size;
	cout << "size v3 --> ";
	cin >> v3Size;

	for (size_t i = 0; i < v3Size; i++)
	{
		v3.push_back(rand() % 10 + 1);
	}

	v4 = v1;

	for (auto it = v3.begin() + 2 ; it != v3.end() - 1; it++)
	{
		v5.push_back(*it);
	}

	/*print(v1, "Print v1 : ");
	print(v2, "Print v2 : ");
	print(v3, "Print v3 : ");
	print(v4, "Print v4 : ");
	print(v5, "Print v5 : ");*/


	// (2)

	cout << "\n-------- (2) ---------\n";


	print(v3, "Print v3 : ");

	for (auto it = v1.rbegin(); it != v1.rend(); it++)
	{
		cout << *it << "\t";
	}cout << endl;

	// (3)

	cout << "\n-------- (3) ---------\n";


	/*int n = 1;

	for (size_t i = 0; i < v2.size(); i++)
	{
		v2[i] += i+1;
	}*/

	// variant 2

	int n = 1;

	for (auto it = v2.begin(); it != v2.end(); it++, n++)
	{
		*it += n;
		cout << *it << "\t";
	}cout << endl;


	for (size_t i = 0; i < v2.size(); i++)
	{
		int j = rand() % (v2.size() / 2);

		swap(v2[i], v2[j]);
	}

	print(v2, "Print v2 : ");


	v2.erase(v2.begin()+2);
	v2.pop_back();
	print(v2, "Print v2 : ");

	// (4)

	cout << "\n-------- (4) ---------\n";


	vector<int> tmp;

	for (size_t i = 0; i < v4.size(); i++)
	{
		tmp.push_back(v4[i]);
		tmp.push_back(v4[i]);
	}

	v4 = tmp;

	print(v4, "Print v4 : ");

	// (5)

	cout << "\n-------- (5) ---------\n";


	v5.clear();

	/*for (size_t i = 0; i < v4.size(); i++)
	{
		if (v4[i] % 2 == 0)
		{
			v5.push_back(v4[i]);
		}
	}*/

	// variant 2

	for (auto it = v4.begin(); it != v4.end(); it++)
	{
		if (*it % 2 == 0)
			v5.push_back(*it);
	}

	//transform(v5.begin(), v5.end(), v5.begin(), div_);

	// variant 2

	transform(v5.begin(), v5.end(), v5.begin(), [](int el) {return el / 2;});

	print(v5, "Print v5 : ");

	// (6)

	cout << "\n-------- (6) ---------\n";


	int value;

	cout << "Enter a number to find it --> ";
	cin >> value;

	auto it = find(v5.begin(), v5.end(), value);
	while (it != v5.end())
	{
		cout << "Found value " << value << " in index --> " << it - v5.begin() << endl;
		it = find(it + 1, v5.end(), value);
	}

	cout << "\n Count of "<< value << " --> " << count_if(v5.begin(), v5.end(), [&](int el) {return el == value; }) << endl;

	// (7)

	cout << "\n-------- (7) ---------\n";


	swap(v4, v5);

	print(v4, "Print v4 : ");
	print(v5, "Print v5 : ");








}


