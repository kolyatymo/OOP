#include <iostream>
#include <string>
using namespace std;



// public - доступ відкритий для всіх
// private - доступ закритий для всіх, крім членів класу
// protected - захищений доступ, до полів та методів класу можуть отримувати лише в середині класу та його нащадки

//const size_t MIN_POWER = 50;
//const size_t MAX_POWER = 100;
//
//
//const size_t MAX_SPEED_LOW = 100;
//const size_t MAX_SPEED_UP = 300;
//
//const double MIN_VOLUME = 0.7;
//const double MAX_VOLUME = 6;
//
//class Car {
//private:
//	string _brand = "NoBrand";
//	string color = "None";
//	size_t power = MIN_POWER;
//	size_t max_speed = MAX_SPEED_LOW;
//	double volume = MIN_VOLUME;
//
//public:
//	Car() = default;
//
//
//	//Car(const string& brand, const string& color)
//	//{
//	//	_brand = brand;
//	//	this->color = color; // this - вказівник на поточний об'єкт класу, використовується для доступу до його членів
//	//}
//
//	/*Car(const string& brand, const string& color)
//		: _brand{brand}, color{color}
//	{
//
//	}*/
//
//	Car(const string& brand, const string& color)
//		
//	{
//		setBrand(brand);
//		setColor(color);
//	}
//	
//	Car(const string& brand, const string& color, const size_t& power)
//		:Car(brand, color)
//	{
//		setPower(power);
//	}
//
//	void setBrand(const string& brand) // seter - присвоєння значення для поля
//	{
//
//		/*if (brand.empty() or brand == " ")
//		{
//			cout << "error brand;" << endl;
//		}
//		else
//		{
//			this->_brand = brand;
//		}*/
//
//
//
//		if (brand.empty() or brand == " ")
//		{
//			cout << "error brand;" << endl;
//			return;
//		}
//		
//		this->_brand = brand;
//		
//	}
//
//	void setColor(const string& color) // seter - присвоєння значення для поля
//	{
//		if (color.empty() or color == " ")
//		{
//			cout << "error color;" << endl;
//			return;
//		}
//		this->color = color;
//	}
//
//	void setPower(const size_t & power)
//	{
//		if (power >= MIN_POWER and power <= MAX_POWER)
//			this->power = power;
//		
//	}
//
//	string getBrand() // geter - отримання значення поля
//	{
//		return this->_brand;
//	}
//
//	void print()
//	{
//		cout << "Brand	  --> " << _brand << endl;
//		cout << "Color	  --> " << color << endl;
//		cout << "Power     --> " << power << endl;
//		cout << "Max speed --> " << max_speed << endl;
//		cout << "Volume    --> " << volume << endl;
//	}
//	
//	Car newCar(const Car& car) {
//		Car tmp;
//		if (this->power > car.power)
//		{
//			tmp.power = this->power;
//
//		}
//		else
//		{
//			tmp.power = car.power;
//		}
//		return tmp;
//	}
//};












const size_t MIN_YEAR = 1900;
const size_t MAX_YEAR = 2026;

const size_t MIN_MONTH = 1;
const size_t MAX_MONTH = 12;

const size_t MIN_DAY = 1;
const size_t MAX_DAY = 31;

const long long MIN_TELEPHONE = 1000000000;
const long long MAX_TELEPHONE = 9999999999;

class Student {
	string name = "NoName";
	string surname = "None";
	string paternal = "Jakob";
	int year = MIN_YEAR;
	int month = MIN_MONTH;
	int day = MIN_DAY;
	long long telephone = MIN_TELEPHONE;
	string city = "Edunburg";
	string country = "USA";
	string name_educational_institution = "shag";
	string cite_educational_institution = "rivne";
	int group = 511;

public:
	void input()
	{
		string tmp;


				cout << "Input name --> ";
		cin >> tmp;
		setName(tmp);
		cout << "Input surname --> ";
		cin >> surname;
		cout << "Input paternal --> ";
		cin >> paternal;
		cout << "Input year --> ";
		int tmp_year;
		cin >> tmp_year;
		setYear(tmp_year);
		cout << "Input month --> ";
		cin >> month;
		cout << "Input day --> ";
		cin >> day;
		cout << "Input telephone --> ";
		cin >> telephone;
		cout << "Input city --> ";
		cin >> city;
		cout << "Input country --> ";
		cin >> country;
		cout << "Input name educational institution --> ";
		string tmp_name_educational_institution;
		cin >> tmp_name_educational_institution;
		setNameInstitution(tmp_name_educational_institution);
		cout << "Input cite educational institution --> ";
		cin >> cite_educational_institution;
		cout << "Input group --> ";
		cin >> group;
	}

	void setName(string name)
	{
		if (name.empty() or name == " ")
			{
				cout << "error brand;" << endl;
				return;
			}
			
			this->name = name;
	}

	void setNameInstitution(string name_educational_institution)
	{
		if (name_educational_institution.empty() or name_educational_institution == " ")
		{
			cout << "error brand;" << endl;
			return;
		}

		this->name_educational_institution = name_educational_institution;
	}

	void setYear(int year)
	{
		if (year >= MIN_YEAR and year <= MAX_YEAR)
		{
			this->year = year;
		}
	}

	string getName()
		{
			return this->name;
		}

	string getNane_In()
	{
		return this->name_educational_institution;
	}

	int getYear()
	{
		return this->year;
	}

	void print()
	{
		cout << "Name                         --> " << name << endl;
		cout << "Surname                      --> " << surname << endl;
		cout << "Paternal                     --> " << paternal << endl;
		cout << "Date of birth                --> " << day << ":" << month << ":" << year << endl;
		cout << "Telephone                    --> " << telephone << endl;
		cout << "City                         --> " << city << endl;
		cout << "Country                      --> " << country << endl;
		cout << "Name educational institution --> " << name_educational_institution << endl;
		cout << "Cite educational institution --> " << cite_educational_institution << endl;
		cout << "Group                        --> " << group << endl;
	}

};



int main()
{

	Student student;
	student.setNameInstitution("OOP");
	student.setYear(1989);
	student.setName("Vasiliy");
	student.print();
	student.input();
	student.print();













	/*Car ford("", "black", 60);
	ford.print();
	cout << endl;
	cout << endl;
	ford.setBrand("ford mustang");
	ford.print();
	cout << "Brand --> " << ford.getBrand() << endl;
	Car audi("Audi", "gray", 100);
	cout << endl;
	audi.print();

	Car tmp = ford.newCar(audi);
	cout << endl;
	tmp.print();*/

}

					