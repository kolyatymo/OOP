#include "Text_stream.h"
#include <string>

// 

void Text_stream::writeToFileArray(const int* arr, const size_t& size, const string& pathFile)
{
	fstream file;
	file.open(pathFile, ios_base::out);

	if (!file.is_open())
	{
		cout << "Error opening file '" << pathFile << "' for write" << endl;
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		file << arr[i] << "\n";
	}cout << " Array was successfully wtitten \n";
	//file.close();  - якщо функція то це не потрібне

}

void Text_stream::showFile(const string& pathFile)
{
	fstream file(pathFile, ios_base::in);
	if (!file.is_open())
	{
		cout << "Error opening file '" << pathFile << "' for write" << endl;
		return;
	}

	// 1 way 
	cout << "------- Content by rdbuf() -------" << endl;
	cout << file.rdbuf() << endl;

	file.seekg(0);
	// 2 way
	cout << "------- Content read line by line -------" << endl;
	string line;
	int i = 0;
	//file >> line;
	while (getline(file, line)) // !file.eof()
	{
		//getline(file, line);
		cout << ++i << " : \t " << line << endl;
	}
	cout << "Position " << file.tellg() << endl;
	file.clear();

	file.seekg(0);

	// 3 way
	cout << "------- Content read char by char -------" << endl;
	char ch;
	while (file.get(ch)) // file >> ch
	{
		cout << ch;
	}

}

//int* Text_stream::readToFile(size_t& size, const string& pathFile)
//{
//	fstream file(pathFile, ios_base::in);
//	if (!file.is_open())
//	{
//		cout << "Error opening file '" << pathFile << "' for write" << endl;
//		return nullptr;
//	}
//
//	size = 0;
//	int value;
//	while (file >> value) ++size;
//	file.clear();
//	file.seekg(0);
//	int* arr = new int[size];
//	int i = 0;
//	while (file >> value)
//	{
//		arr[i++] = value;
//	}return arr;
//}
