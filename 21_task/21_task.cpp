#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Data
{
    char* name = nullptr;
    char* surname = nullptr;
    char* patronymic = nullptr;
    size_t homePhone = 0;
    size_t workPhone = 0;
    size_t mobilePhone = 0;
    string sity = "None";
    string country = "None";

    inline bool Valid(const char* data) 
	{
		return data != nullptr and data[0] != '\0';
	}
    void copy(char*& new_, const char* data) 
	{
		if (new_ != nullptr)
		{
			delete[] new_;
		}
		if (!Valid(data))
		{
			new_ = new char[5];
			strcpy_s(new_, 5, "none");
			return;
		}
		size_t size = strlen(data) + 1;
		new_ = new char[size];
		strcpy_s(new_, size, data);
	}

public:
	Data()
		:Data("None", "None", "None", 0, 0, 0, "None", "None")
	{

	}
	Data(const char* name)
		:Data(name, "None", "None",0,0,0, "None", "None")
	{

	}
	Data(const char* name, const char* surname)
		:Data(name,surname, "None", 0, 0, 0, "None", "None")
	{

	}
	Data(const char* name, const char* surname, const char* patronymic)
		:Data(name, surname, patronymic, 0, 0, 0, "None", "None")
	{

	}
	Data(const char* name, const char* surname, const char* patronymic, const size_t& homePhone)
		:Data(name, surname, patronymic, homePhone,0, 0, "None", "None")
	{

	}
	Data(const char* name, const char* surname, const char* patronymic, const size_t& homePhone, const size_t& workPhone)
		:Data(name, surname, patronymic, homePhone, workPhone, 0, "None", "None")
	{

	}
	Data(const char* name, const char* surname, const char* patronymic, const size_t& homePhone, const size_t& workPhone, const size_t& mobilePhone)
		:Data(name, surname, patronymic, homePhone, workPhone, mobilePhone, "None", "None")
	{

	}
	Data(const char* name, const char* surname, const char* patronymic, const size_t& homePhone, const size_t& workPhone, const size_t& mobilePhone, const string& sity)
		:Data(name, surname, patronymic, homePhone, workPhone, mobilePhone, sity, "None")
	{

	}
	Data(const char* name, const char* surname, const char* patronymic, const size_t& homePhone, const size_t& workPhone, const size_t& mobilePhone, const string& sity, const string& country)
		:homePhone(homePhone), workPhone(workPhone),mobilePhone(mobilePhone), sity(sity), country(country)
	{
		copy(this->name, name);
		copy(this->surname, surname);
		copy(this->patronymic, patronymic);
	}

	void print() const
	{
		cout << "\t Name       --> " << this->name << endl;
		cout << "\t Surname    --> " << this->surname << endl;
		cout << "\t Patronymic --> " << this->patronymic << endl;
		cout << "\t HomePhone  --> " << this->homePhone << endl;
		cout << "\t WorkPhone  --> " << this->workPhone << endl;
		cout << "\t MobilePhone--> " << this->mobilePhone << endl;
		cout << "\t Sity       --> " << this->sity << endl;
		cout << "\t Country    --> " << this->country << endl;
		cout << endl;
	
	}


	void setName(const char* name)
	{
		copy(this->name, name);
	}
	void setSurname(const char* surname)
	{
		copy(this->surname, surname);
	}
	void setPatronymic(const char* patronymic)
	{
		copy(this->patronymic, patronymic);
	}
	void setHomePhone(const size_t& homePhone)
	{
		this->homePhone = homePhone;
	}
	void setWorkPhone(const size_t& workPhone)
	{
		this->workPhone = workPhone;
	}
	void setMobilePhone(const size_t& mobilePhone)
	{
		this->mobilePhone = mobilePhone;
	}
	void setSity(const string& sity)
	{
		this->sity = sity;
	}
	void setCountry(const string& country)
	{
		this->country = country;
	}

	const char* getName() const
	{
		return this->name;
	}
	const char* getSurname() const
	{
		return this->surname;
	}
	const char* getPatronymic() const
	{
		return this->patronymic;
	}
	const size_t& getHomePhone() const
	{
		return this->homePhone;
	}
	const size_t& getWorkPhone() const
	{
		return this->workPhone;
	}
	const size_t& getMobilePhone() const
	{
		return this->mobilePhone;
	}
	const string& getSity() const
	{
		return this->sity;
	}
	const string& getCountry() const
	{
		return this->country;
	}

	~Data()
	{
		if (this->name != nullptr)
		{
			delete this->name;
			this->name = nullptr;
		}
		if(this->surname != nullptr)
		{
			delete this->surname;
		}
		if (this->patronymic != nullptr)
		{
			delete this->patronymic;
		}
	}
};


class PhoneBook
{
    size_t size = 4;
    size_t count = 0;
    Data* list = new Data[size];

public:
    void add(const Data& data)
    {
        list[count++] = data;
    }
	

	void remove(const int& index)
	{
		for (size_t i = index; i < count - 1; i++)
		{
			list[i] = list[i + 1];
		}
		count--;
	}

	void findByName(const char* name)
	{
		for (size_t i = 0; i < count; i++)
		{
			if (strcmp(list[i].getName(), name) == 0)
			{
				cout << "---------------------- found by name ---------------------" << endl;
				list[i].print();
			}
		}
	}

	void findBySurname(const char* surname)
	{
		for (size_t i = 0; i < count; i++)
		{
			if (strcmp(list[i].getSurname(), surname) == 0)
			{
				cout << "---------------------- found by surname ---------------------" << endl;
				list[i].print();
			}
		}
	}

	void findByPatronymic(const char* patronymic)
	{
		for (size_t i = 0; i < count; i++)
		{
			if (strcmp(list[i].getPatronymic(), patronymic) == 0)
			{
				cout << "---------------------- found by patronymic ---------------------" << endl;
				list[i].print();
			}	
			
		}
	}

	void saveFile(const char* file) const
	{
		ofstream fileOut("outfile.txt");

		if (!fileOut.is_open())
		{
			cout << "Error file not found" << endl;
		}
		else
		{
			for (size_t i = 0; i < count; i++)
			{
				fileOut << "Index --> " << i + 1 << endl;
				fileOut << "\t Name       --> " << list[i].getName() << endl;
				fileOut << "\t Surname    --> " << list[i].getSurname() << endl;
				fileOut << "\t Patronymic --> " << list[i].getPatronymic() << endl;
				fileOut << "\t HomePhone  --> " << list[i].getHomePhone() << endl;
				fileOut << "\t WorkPhone  --> " << list[i].getWorkPhone() << endl;
				fileOut << "\t MobilePhone--> " << list[i].getMobilePhone() << endl;
				fileOut << "\t Sity       --> " << list[i].getSity() << endl;
				fileOut << "\t Country    --> " << list[i].getCountry() << endl;
			}
			fileOut.close();
		}

	}

	void loadFile(const char* file)
	{
		ifstream fileIn("outfile.txt");
		string line;

		if (!fileIn.is_open())
		    cout << "File not found" << endl;
		else
		{
			string line;
			while (getline(fileIn, line))
			{
				cout << line << endl;
			}
			fileIn.close();
		}
	}

	void print() const
	{
		for (size_t i = 0; i < count; i++)
		{
			cout << "Index --> " << i + 1 << endl;
			list[i].print();
		}
	}

	/*~PhoneBook()
	{
		if (list != nullptr)
		{
			delete[] list;
			list = nullptr;
		}
	}*/
};




int main()
{
   
	PhoneBook phoneBook;

	Data data1("Gesha", "Koval", "Teaks", 123456789, 987654321, 555555555, "Kyiv", "Ukraine");
	Data data2("Vov", "Petro", "Sido", 56235236, 53255661, 55432425, "Rivne", "Ukraine");
	Data data3("Sash", "Sidor", "Petr", 342545789, 623654321, 63263676, "Lviv", "Ukraine");

	phoneBook.add(data1);
	phoneBook.add(data2);
	phoneBook.add(data3);
	phoneBook.print();

	while (true)
	{

		int positions;
		cout << "\n\t\t1 - Enter index for remove\n"
			 << "\t\t2 - find by name\n"
			 << "\t\t3 - find by surname\n"
			 << "\t\t4 - find by patronymic\n"
			 << "\t\t5 - save to file\n"
			 << "\t\t6 - load from file\n"
			 << "\t\t0 - Exit\n"
			 << "\t\tEnter number --> ";
		cin >> positions;

		if(positions == 0)
			break;

		switch (positions)
		{
		case 1:
		{
			int i;
			cout << "Enter index for remove --> ";
			cin >> i;
			phoneBook.remove(i - 1);
			phoneBook.print();
			break;
		}
		case 2:
		{
			phoneBook.findByName("Sash");
			break;
		}
		case 3:
		{
			phoneBook.findBySurname("Koval");
			break;
		}
		case 4:
		{
			phoneBook.findByPatronymic("Petr");
			break;
		}
		case 5:
		{
			phoneBook.saveFile("outfile.txt");
			break;
		}
		case 6:
		{
			phoneBook.loadFile("outfile.txt");
			break;
		}
		default:
			break;
		}
	}

}

