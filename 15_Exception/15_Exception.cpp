#include <iostream>
//#include "MyException.h"
//#include <exception>
//#include <string>
//#include <vector>
using namespace std;

class  DivByZeroException
    : public exception
{
public:
    DivByZeroException(const string& message = "Division by zero")
        :exception(message.data()) // return c_str
    {}
};

class TooBigDivisorException
    :public overflow_error
{
    static const int LIMIT_UP = 1'000'000;
    double value;
public:
    TooBigDivisorException(const string& message = "to big divisor", const double& value = LIMIT_UP)
        :overflow_error(message) , value{value}
    {}
    double getValue() const {
        return value;
    }
};

class TooSmallDivisorException
    :public underflow_error
{
    static const int LIMIT_DOWN = -1'000'000;
    double value;
public:
    TooSmallDivisorException(const string& message = "to small divisor", const double& value = LIMIT_DOWN)
        :underflow_error(message), value{value}
    {}
    double getValue() const {
        return value;
    }
};

double div(double a, double b)
{
    const double LIMIT = 1'000'000;
    if (b == 0)
        throw DivByZeroException(); // const char*
    if (b > LIMIT)
        throw TooBigDivisorException("Too big number", b); // double
    if (b < -LIMIT)
        throw TooSmallDivisorException("Too small number", b);// int

    return a / b;
}





// Exception - помилкова ситуація яка потребує обробки
//try, catch, throw

//double div(double a, double b)
//{
//    return a / b;
//}
//    const double LIMIT = 1'000'000;
//    if (b == 0)
//        throw "Error :: division by zero"; // const char*
//    if (b > LIMIT)
//        throw b; // double
//    if (b < -LIMIT)
//        throw (int)b;// int
//

//double div(double a, double b)
//{
//    const double LIMIT = 1'000'000;
//    if (b == 0)
//        throw DivByZeroException(); // const char*
//    if (b > LIMIT)
//        throw TooBigDivisorException("Too big number", b); // double
//    if (b < -LIMIT)
//        throw TooSmallDivisorException("Too small number", b);// int
//
//    return a / b;
//}

//void terminate()
//{
//    cout << "Overlapping terminate is working and doing exit" << endl;
//    exit(EXIT_FAILURE);
//}

//void my_terminate()
//{
//    cout << "My terminate is working and doing exit" << endl;
//    exit(EXIT_FAILURE);
//}



int main()
{
    //set_terminate(my_terminate);
    //double a, b, result;
    //cout << "Enter two number :: ";
   
    //while (cin >> a >> b)
    //{
    //    try {
    //        result = div(a, b);
    //        cout << "Result :: " << a << " / " << b << " = " << result << endl;
    //    }
    //    catch (DivByZeroException ex)
    //    {
    //        cout << "Exception " << typeid(ex).name() << " was caught\n " << ex.what() << endl;
    //        cout << "Bad value :: " << fixed << ex.getValue() << endl;
    //    }
    //    catch (TooBigDivisorException ex) 
    //    {
    //        cout << "Exception " << typeid(ex).name() << " was caught\n " << ex.what() << endl;
    //        cout << "Bad value :: " << fixed << ex.getValue() << endl;
    //    }
    //    catch (TooSmallDivisorException ex)
    //    {
    //        cout << "Exception " << typeid(ex).name() << " was caught\n " << ex.what() << endl;
    //        cout << "Bad value :: " << fixed << ex.getValue() << endl;
    //    }

    //    catch (MyException ex)
    //    {
    //        cout << ex.what() << "Bad value :: " << ex.getValue() << endl;
    //    }

    //    catch (...) // default
    //    {
    //        cout << "Run dafault catch" << endl;
    //    }
    //}

    //string str = "a123b123";

    //try
    //{
    //    int value = stoi(str);
    //    cout << "Value :: " << value << endl;
    //}
    //catch (exception& ex)
    //{
    //    cout << "Caught : " << typeid(ex).name() << endl;
    //    cout << "Message : " << ex.what() << endl;
    //}

    ///*str = "ABCDE";
    //cout << str[5];*/

    //vector<int> v{ 1,2,3,4,5 };
    //try
    //{
    //    //cout << "Vector index 5 " << v[5];
    //    cout << "Vector index 5 " << v.at(5);


    //}
    //catch (exception& ex)
    //{
    //    cout << "Caught : " << typeid(ex).name() << endl;
    //    cout << "Message : " << ex.what() << endl;
    //}







    //double a, b, result;
    //cout << "Enter two number :: ";

    //while (cin >> a >> b)
    //{
    //    try {
    //        result = div(a, b);
    //        cout << "Result :: " << a << " / " << b << " = " << result << endl;
    //    }
    //    catch (DivByZeroException ex)
    //    {
    //        cout << "Exception " << typeid(ex).name() << " was caught\n " << ex.what() << endl;
    //        cout << "Bad value :: " << fixed << ex.getValue() << endl;
    //    }
    //    catch (TooBigDivisorException ex) 
    //    {
    //        cout << "Exception " << typeid(ex).name() << " was caught\n " << ex.what() << endl;
    //        cout << "Bad value :: " << fixed << ex.getValue() << endl;
    //    }
    //    catch (TooSmallDivisorException ex)
    //    {
    //        cout << "Exception " << typeid(ex).name() << " was caught\n " << ex.what() << endl;
    //        cout << "Bad value :: " << fixed << ex.getValue() << endl;
    //    }

    //    catch (exception ex)
    //    {
    //        cout << ex.what() << "Bad value :: " << ex.getValue() << endl;
    //    }

    //    catch (...) // default
    //    {
    //        cout << "Run dafault catch" << endl;
    //    }
    //}
    
}


