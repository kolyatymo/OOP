#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <Windows.h>
#include <fstream>

using namespace std;

using word = string;
using translator = vector<string>;

void printTranslator(translator translator)
{
	cout << "(";
	for (auto i = translator.begin(); i != translator.end(); i++)
	{
		cout << *i << ", ";
	}cout << ")";
	cout << endl;
	
}

void Print(map<word, translator> vocabulary)
{
	for (auto& i : vocabulary)
	{
		cout << "Word --> " << i.first << "\t Tranclator --> "; 
		printTranslator(i.second);
	}cout << endl;
}


class Vocabulary
{
	map<word, translator> vocabulary;
public:
	Vocabulary() = default;
	void PrintMap() const;
	void addWord(const word& word_, const translator& trans);
	void findTranslator(const word& word_);
	void addTranslator(const word& word_, const translator& trans);
	void deleteAll();
	void deleteWord(const word& word_);
	void writeToFile(const string& pathFile);
	void showFile(const string& pathFile);
};

inline void Vocabulary::PrintMap() const
{
	Print(this->vocabulary);	
}

inline void Vocabulary::addWord(const word& word_, const translator& trans)
{
	vocabulary.insert(make_pair(word_, trans));
	Print(vocabulary);
}

inline void Vocabulary::findTranslator(const word& word_)
{
	auto it = vocabulary.find(word_);
	if (it != vocabulary.end())
	{
		cout << "Word --> " << it->first << "\t Translator --> ";
		printTranslator(it->second);
	}
	else
		cout << word_ << " --> Not found" << endl;
	
}

inline void Vocabulary::addTranslator(const word& word_, const translator& trans)
{
	auto it = vocabulary.find(word_);

	if (it != vocabulary.end())
	{
		for (auto el : trans)
		{
			it->second.push_back(el);
		}
	}
	else
		cout << word_ << " --> Not found" << endl;
}

inline void Vocabulary::deleteAll()
{
	vocabulary.clear();
}

inline void Vocabulary::deleteWord(const word& word_)
{
	auto it = vocabulary.find(word_);
	if (it != vocabulary.end())
	{
		vocabulary.erase(it);
		cout << word_ << " --> deleted " << endl;
	}
	else
		cout << word_ << " --> Not found" << endl;
}

inline void Vocabulary::writeToFile(const string& pathFile)
{
	ofstream file(pathFile);
	if (!file.is_open())
	{
		cout << "file not found " << endl;
		return;
	}
	else
	{
		for (auto& first : vocabulary)
		{
			file << first.first << " --> ";
			for (auto& second : first.second)
			{
				file << second << ", ";
			}file << endl;
		}
	}
}

inline void Vocabulary::showFile(const string& pathFile)
{
	ifstream file(pathFile);
	if (!file.is_open())
	{
		cout << "file not found " << endl;
		return;
	}
	else
		cout << file.rdbuf() << endl;
}
