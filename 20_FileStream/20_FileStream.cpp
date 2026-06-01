#include <iostream>
#include <vector>
#include "Text_stream.h"

struct Student
{
    char name[50]{};
    char lastame[50]{};
    int age;
    void print()
    {
        cout << lastame << " " << name << " \t age :: " << age << endl;
    }
};

int main()
{
    //Text_stream txt;
    //const int SIZE = 5;
    //int arr[]{ 10,21,100,-34,77 };
    ////string fname = R"(C:\Users\Vlad\source\repos\OOP\20_FileStream\my.txt)";
    //string fname = "my.txt";
    //txt.writeToFileArray(arr, SIZE, fname);

    //txt.showFile(fname);

    //size_t count = 0;
    //int* mas;
    //mas = txt.readToFile(count, fname);
    //for (size_t i = 0; i < count; i++)
    //{
    //    cout << mas[i] << "\t";
    //}cout << endl;

    string fname = "student.dat";
    fstream file(fname, ios_base::in | ios_base::out | ios_base::binary);
    if (!file.is_open())
    {
        cout << "Error" << endl;
        return 0;
    }
   /* Student stud{ "Alex", "Bondar", 22 };
    file.write((char*)&stud, sizeof(Student));

    Student arr[2]{ {"Oliarila", "Melnuk", 18}, {"Taras", "Voyko", 25} };
    file.write(reinterpret_cast<const char*>(arr), sizeof(arr));

    vector<Student> vec = { {"Maria", "Muchka", 12}, {"Igor", "Polichuk", 25} };
    file.write(reinterpret_cast<const char*>(vec.data()), vec.size() * sizeof(Student));*/

    vector<Student> res;
    Student tmp;
    /*while (file.read(reinterpret_cast<char*>(&tmp), sizeof(Student))); // читання по одному студенту
    {
        res.push_back(tmp);
    }

    cout << "Print Student :: " << endl;
    for(auto& i : res )
    {
        i.print();
    }*/

    file.seekg(0, ios_base::end);
    cout << file.tellg() << endl;
    //int len = file.tellg();
    int count = file.tellg() / sizeof(Student);
    cout << count << endl;
    res.resize(count);
    file.seekg(0);
    file.read(reinterpret_cast<char*>(res.data()), sizeof(Student) * count);
    cout << "Print Student :: " << endl;
    for (auto& i : res)
    {
        i.print();
    }
}

