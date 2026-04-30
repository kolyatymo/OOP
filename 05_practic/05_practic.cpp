#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
    Fraction A(1, 2);
	Fraction B(3, 4);
	cout << "A";
	A.print();
	cout << "\t B";
	B.print();
	cout << endl;

	Fraction C = A + B;
	cout << "A";
	A.print();
	cout << " + B";
	B.print();
	cout << " = C";
	C.print();
	cout << endl;

	C = A - B;
	cout << "A";
	A.print();
	cout << " - B";
	B.print();
	cout << " = C";
	C.print();
	cout << endl;

	C = A * B;
	cout << "A";
	A.print();
	cout << " * B";
	B.print();
	cout << " = C";
	C.print();
	cout << endl;

	C = A / B;
	cout << "A";
	A.print();
	cout << " / B";
	B.print();
	cout << " = C";
	C.print();
	cout << endl;

	++A;
	cout << "++A = ";
	A.print();
	cout << endl;
	
	A++;
	cout << "A++ = ";
	A.print();
	cout << endl;

	--B;
	cout << "--B = ";
	B.print();
	cout << endl;

	B--;
	cout << "B-- = ";
	B.print();
	cout << endl;

	


}


