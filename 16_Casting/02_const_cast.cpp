//#include <iostream>
//#include <string>
//using namespace std;
//
//void funcInc(const int& value)
//{
//	// ++value;
//	/*int& ref = const_cast<int&>(value);
//	ref++;*/
//	
//	++const_cast<int&>(value);
//
//}
//
//void funcString(const string& value)
//{
//	++const_cast<string&>(value)[0];
//	string& ref = const_cast<string&>(value);
//	ref += "!!!";
//}
//
//class Person
//{
//public:
//	Person(const string& name = "Noname", const size_t& age = 0)
//		:name{name}, age{age}
//	{
//
//	}
//	const string& getName() const
//	{
//		if (islower(name[0]))
//		{
//			string& ref = const_cast<string&>(name);
//			ref[0] = toupper(ref[0]);
//		}
//		return name;
//	}
//
//	const size_t& getAge() const
//	{
//		Person* pointer = const_cast<Person*>(this);
//		pointer->age++;
//		pointer->name += "*";
//		return age;
//	}
//
//private:
//	string name;
//	size_t age;
//};
//
//
//int main()
//{
//	/*const int size = 10;
//	size = 11;*/
//
//
//	int a = 5;
//	cout << "Before :: " << a << endl;
//	funcInc(a);
//	cout << "After  :: " << a << endl;
//	string str = "CONST_CAST";
//	funcString(str);
//	cout << "Result :: " << str << endl;
//
//	cout << "\n\n ============================= \n\n";
//	Person person("dmytro", 22);
//	cout << person.getName() << endl;
//	cout << person.getAge() << endl;
//	cout << person.getAge() << endl;
//	cout << person.getName() << endl;
//
//}