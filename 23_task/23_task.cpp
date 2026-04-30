#include <iostream>
#include "String.h"
using namespace std;


int main()
{
    String str1("hrogram");
    String str2(" C++");
    str1.print();
    str2.print();

    char* res1 = str1.concat(str2.getStr());  
    cout << res1 << endl;

    String str3("programming");
    String str4("language");
    str3.print();
    str4.print();

    char* res2 = str3.interset(str4.getStr());  
    cout << res2 << endl;
}
