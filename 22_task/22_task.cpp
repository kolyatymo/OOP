#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector v1(2);

    v1.push(10);
    v1.push(20);
    v1.print();

    if (!v1.empty())
        v1.pop();

    v1.print();

    v1.reserve(20);

    v1.front() = 1234;
    v1.back() = 4321;
    v1.print();

    v1.clear();
    v1.print();

	
}

