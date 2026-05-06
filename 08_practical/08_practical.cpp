#include <iostream>
#include "Matrix.h"
using namespace std;

#include "Matrix.h"

int main()
{
    Matrix<size_t, 3, 5> m1(1); 
    Matrix<size_t, 3, 5> m2(4); 

    m1.print();

    m2.print();

    Matrix<size_t, 3, 5> m3 = m1 + 2;
    m3.print();

    Matrix<size_t, 3, 5> m4 = m1.SumeTwoMatrix(m3);
    m4.print();

    
}


