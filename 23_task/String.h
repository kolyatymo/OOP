#pragma once
class String
{
public:

	String();
	String(const size_t& size);
	String(const char* str);
	String(const String& other);
	~String();

	const char* getStr() const;
	

	void operator=(const String& other);
	bool operator<(const String& other) const;


	void input();
	void print() const;

	char* concat(const char* str);
	char* interset(const char* str);

	static size_t getCounter();
	static int compare(const String& str1, const String& str2);
	static void sort(String* lines, const size_t size);
private:
	char* str = nullptr;
	size_t size = 0;
	static size_t counter;

	void copyStr(char*& dest, const char* source);
};

inline const char* String::getStr() const
{
	return str;
}