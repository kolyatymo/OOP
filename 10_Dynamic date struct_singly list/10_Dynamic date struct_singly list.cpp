#include <iostream>
#include "Fwdlist.h"
using namespace std;


int main()
{
    Fwdlist<int> list;
    list.print();

	for (size_t i = 0; i < 3; i++)
	{
		list.AddHead((i + 1) * 10);
		list.print();
	}
	cout << "\n ----- Removeing head -----" << endl;
	while (!list.isempty())
	{
		list.RemoveHead();
		list.print();
	}
	cout << " Add again--> \n";
	list.AddHead(1000);
	list.AddHead(200);
	list.AddHead(300);
	list.print();


	list.AddTail(500);
	list.print();

	//list.clear();
	//list.print();

	Fwdlist<int> list2;

	/*list.RemoveAt(200);
	list.print();

	list.RemoveAt(100);
	list.print();*/

	list2.AddHead(1000);
	list2.AddHead(2000);

	Fwdlist<int> list3 = list + list2;
	
	Fwdlist<int> list4 = list * list2;

	list4.print();

	//list3.print();


	Fwdlist<int> copy(list);
	copy.print();

	Fwdlist<int> copy2;
	copy2 = list2;
	copy2.print();
	
}

