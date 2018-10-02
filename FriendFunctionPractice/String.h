#pragma once
#include <iostream>
class String
{
	friend std::ostream &operator<<(std::ostream &os, const String &string);
public:
	String();
	String(const char *const data);
	String(const String &string);
	~String();
	String &operator=(const String &string);
	std::size_t length();
private:
	void copyData(const char *const data);
	char *value;
};