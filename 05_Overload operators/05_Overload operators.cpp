#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point A(2, 5);
    Point B(7, 3);
    cout << "A";
    A.print();
    cout << "\t B";
    B.print();
    cout << endl;

    // +
    Point C = A + B;
    cout << "A";
    A.print();
    cout << " + B";
    B.print();
    cout << " = C";
    C.print();
    cout << endl;

    // -
    C = A - B;
    cout << "A";
    A.print();
    cout << " - B";
    B.print();
    cout << " = C";
    C.print();
    cout << endl;

    // ==
    cout << "A";
    A.print();
    cout << " == B";
    B.print();
    cout << boolalpha << " --> " << (A == B);
    cout << endl;

    C.setX(2);
    C.setY(5);
    cout << "A";
    A.print();
    cout << " == C";
    C.print();
    cout << boolalpha << " --> " << (A == C);
    cout << endl;

    // !=
    cout << "A";
    A.print();
    cout << " != B";
    B.print();
    cout << boolalpha << " --> " << (A != B);
    cout << endl;


    cout << "\n\nA";
    A.print();
    cout << endl;
    cout << "A";
    (++A).print();
    cout << endl;
    cout << "A";
    (A++).print();
    cout << endl;
    cout << "A";
    (A).print();


}

