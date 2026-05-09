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
	list.AddHead(100);
	list.AddHead(200);
	list.AddHead(300);
	list.print();


	list.AddTail(500);
	list.print();

	//list.clear();
	//list.print();

	/*list.RemoveAt(200);
	list.print();*/


	/*Fwdlist<int> copy(list);
	copy.print();*/
}

