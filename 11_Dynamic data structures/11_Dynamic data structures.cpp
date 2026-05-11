#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List<int> list;
	for (size_t i = 0; i < 3; i++)
	{
		list.AddHead(rand() % 10 + 1);
		list.Show();
	}
	list.printRev();

	for (size_t i = 0; i < 3; i++)
	{
		list.AddTail(rand() % 10 + 1);
		list.Show();
	}
	list.printRev();

	/*cout << "Remove all :: " << endl;

	while (!list.isEmpty())
	{
		list.RemoveHead();
		list.Show();
		list.printRev();
	}*/


	/*list.RemoveData(1);
	list.Show();
	list.printRev();*/

	list.RemoveTail();
	list.Show();
	list.printRev();
	
	list.RemoveHead();
	list.Show();
	list.printRev();
	cout << "\n\n";

	list.insByIndex(2, 100);
	list.Show();
	
	/*list.insByIndex(3, 100);
	list.Show();*/

	/*list.DeleteAll();
	list.Show();*/

	/*List<int> list2 = list;
	list2.Show();

	list.delByIndex(2);
	list.Show();*/



	//cout << list.findNode(100);

	//cout << list.findAndReplace(100, 20);

	list.revolution();
	list.Show();
}
