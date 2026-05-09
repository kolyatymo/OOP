#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List<int> list;
	for (size_t i = 0; i < 3; i++)
	{
		list.AddHead(rand() % 10 + 1);
		list.print();
	}
	list.printRev();

	for (size_t i = 0; i < 3; i++)
	{
		list.AddTail(rand() % 10 + 1);
		list.print();
	}
	list.printRev();

	/*cout << "Remove all :: " << endl;

	while (!list.isEmpty())
	{
		list.RemoveHead();
		list.print();
		list.printRev();
	}*/


	/*list.RemoveData(1);
	list.print();
	list.printRev();*/

	list.RemoveTail();
	list.print();
	list.printRev();
	
	list.RemoveHead();
	list.print();
	list.printRev();
	cout << "\n\n";

	/*list.clear();
	list.print();*/

	/*List<int> list2 = list;
	list2.print();*/

	list.delByIndex(2);
	list.print();

}
