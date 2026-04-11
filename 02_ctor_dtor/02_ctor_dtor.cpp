#include <iostream>
using namespace std;


class City
{
    char* name = nullptr;
    char* country = nullptr;
    size_t population = 0;
    inline bool isValid(const char* source) // невелика функція без циклів нерекурсивна.
    {
        return source != nullptr and source[0] != '\0';
    }
    void copyStrField(char*& dest, const char* source) // source - звідки dest - куди
    {
        if (dest != nullptr)
        {
            delete[] dest;
        }
        if (!isValid(source))
        {
            dest = new char[5];
            strcpy_s(dest, 5, "none");
            return;
        }
        size_t size = strlen(source) + 1;
        dest = new char[size];
        strcpy_s(dest, size, source);
    }

public:
    City() // default
        :City("None")
    {
        
    }
    City(const char* name)
        :City(name,"None")
    {
        
    }
    City(const char* name, const char* country)
        :City(name, country, 0)
    {
        
    }
    City(const char* name, const char* country, const size_t& population)
        :population{population}
    {
        copyStrField(this->name, name);
        copyStrField(this->country, country);
        cout << "------------- Ctor " << this->name << endl;
    }
    void print() const // не повинен змінювати стан обєкту (жодне поле міняти НЕ МОЖНА)
    {
        cout << "\t City       --> " << this->name << endl;
        cout << "\t Country    --> " << this->country << endl;
        cout << "\t population --> " << this->population << endl;
    }
    void setName(const char* name)
    {
        copyStrField(this->name, name);
    }
    void setCountry(const char* country)
    {
        copyStrField(this->country, country);
    }
    void setPopulation(const size_t& population)
    {
        this->population = population;
    }

    const char* getName() const 
    {
        return this->name;
    }

    const char* getCountry() const
    {
        return this->country;
    }

    const size_t& getPopulation() const
    {
        return this->population;
    }




    ~City() // memory leak!!!
    {
        cout << "------------- Dtor " << endl;
        if (this->name != nullptr)
        {
            delete this->name;
            this->name = nullptr;
        }

        if (this->country != nullptr)
            delete this->country;
    }
};


class ListCity
{
    size_t size = 5;
    size_t count = 0;
    City* list = new City[size];

public:
    void add(const City& city)
    {
        list[count++] = city;
    }
    void print()const
    {
        for (size_t i = 0; i < count; i++)
        {
            list[i].print();
        }
    }
    ~ListCity()
    {
        cout << "------------- Dtor list city " << endl;
        if (list != nullptr)
        {
            delete[] list;
            list = nullptr;
        }
    }
};




int main()
{
   /* City city("Rivne", "Urkaine", 244000);
    city.print();
    City city_2;
    city_2.print();*/

   // City* city = new City("Rivne", "Urkaine", 244000);
   // auto res = city->getName();
   // cout << res << endl;
   // //res[0] = 'A';
   // city->print();
   ///* system("pause");*/


   // system("pause");
   // delete city;


    ListCity list;

    City city_1("Rivne", "Ukraine", 244000);
    City city_2("Lviv", "Ukraine", 734000);
    list.add(city_1);
    list.add(city_2);
    list.print();
}


