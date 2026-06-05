//#include <iostream>
//using namespace std;

//void print()
//{
//    cout << "Test print() " << endl;
//}
//
//void print()
//{
//    cout << "Test print() 2 " << endl;
//}

#include "Func.h"
using std::cout;
using std::endl;
using Shapes::value; // global
using namespace Shapes;
using namespace Trian;
//using namespace Shapes::Trian;



int main()
{
   /* string name = "Alex";
    cout << name << endl;
    print();*/
   /* string name = "Pavlo";
    cout << name << endl;*/

    //std::cout << Shapes::areaCircle(5) << std::endl;
    std::cout << areaCircle(5) << std::endl;
    //name = "Test";
    cout << value << endl;
    Shapes::name = "Test";
    std::cout << areaTrian(10, 2) << std::endl;
}

