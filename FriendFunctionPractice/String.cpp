#include "String.h"
#include <cstring>
using namespace std;

std::ostream &operator<<(std::ostream &os, const String & string)
{
	os << string.value;
	return os;
}

String::String()
{
	value = new char[1];
	value[0] = '\0';
}

String::String(const char *const data)
{
	copyData(data);
}

String::String(const String &string)
{
	copyData(string.value);
}

String::~String()
{
	delete[] value;
}

String &String::operator=(const String &string)
{
	delete[] value;
	copyData(string.value);
	return *this;
}

std::size_t String::length()
{
	return strlen(value);
}

void String::copyData(const char *const data)
{
	size_t dataLength = strlen(data);
	value = new char[dataLength + 1];
	strcpy(value, data);
}