#include "Vocabulary.h"

int main()
{

	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/


	vector<string> str{ "pinkod", "zemla" };
	
	Vocabulary v;
	v.addWord("word", str);
	//v.PrintMap();
	v.addTranslator("word", {"malk"});
	/*v.PrintMap();*/
	//v.deleteWord("word");


	string fname = "vocabulary.txt";
	v.writeToFile(fname);
	v.showFile(fname);


}