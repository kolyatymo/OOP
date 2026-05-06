#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
    MyString str1("microsoft");
    MyString str2("windows");

    MyString res1 = str1 * str2;
    cout << res1.getStr() << endl;

    MyString res2 = str1 / str2;
    cout << res2.getStr() << endl;

   /* MyString res3 = str1 + "adv";
    cout << res3.getStr() << endl;
    
    MyString res4 = str1 + str2;
    cout << res4.getStr() << endl;*/

    /*MyString str3("abcd");

    ++str3;

    MyString res5 = str3 + str1;
    cout << res5.getStr() << endl;

    --res5;

    cout << res5.getStr() << endl;

    cout << str3.getStr() << endl;*/

    /*MyString res6 = str1 < str2;

    cout << (++str1).getStr();

    cout << res6.getStr() << endl;

    if (str1 == str2)
    {

    }*/

    

    /*bool res7 = str1 < str2;
    cout << boolalpha << res7 << endl;

    bool res9 = str1 != str2;
    cout << boolalpha << res9 << endl;
    
    MyString res8 = !str1;
    cout << res8.getStr();*/
    
}
