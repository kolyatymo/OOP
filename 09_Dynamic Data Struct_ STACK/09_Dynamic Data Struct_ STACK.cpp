#include <iostream>
#include "Stack.h"
#include <ctime>
#include <stack> 

using namespace std;


int main()
{
    /*srand(time(0));

    Stack<int> st(2,2);
    cout << "Size --> " << st.size() << endl;
    for (size_t i = 0; i < 10; i++)
    {
        st.push(rand() % 10 + 1);
        cout << "\t Size --> " << st.size() << endl;
    }

    cout << "Size --> " << st.size() << endl;*/


    srand(time(0));

    Stack<int> st(2, 2);
    cout << "Capacity --> " << st.capacity << endl;
    for (size_t i = 0; i < 10; i++)
    {
        st.push(rand() % 10 + 1);
        cout << "\t Capacity --> " << st.capacity << endl;
        //cout << st.pop();
    }
    cout << endl;
    cout << "Capacity --> " << st.capacity << endl;
    cout << "Top --> " << st.top() << endl;
    st.pop();

    cout << "Top --> " << st.top() << endl;


    stack<string> str;
    str.push("one");
    cout << str.top() << endl;
    str.pop();
    str.pop();
    

}

