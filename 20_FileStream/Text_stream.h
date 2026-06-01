#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Text_stream
{
public:
	void writeToFileArray(const int* arr, const size_t& size, const string& pathFile);
	void showFile(const string& pathFile);
	//int* readToFile(size_t& size, const string& pathFile);
};

