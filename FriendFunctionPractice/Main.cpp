#include <vld.h>
#include <iostream>
#include "String.h"
using namespace std;
int main()
{
	String string1;
	cout << "string1.length(): " << string1.length() << endl;
	String string2("");
	cout << "string2.length(): " << string2.length() << endl;
	String string3("Read the fucking manual!");
	cout << "string3: " << string3 << endl;
	char chars[] = "¶ÁÄÇ²Ùµ°µÄÊÖ²á£¡";
	String string4(chars);
	cout << "string4: " << string4 << endl;
	String string5(string4);
	cout << "string5: " << string5 << endl;
	String string6 = string3;
	cout << "string6: " << string6 << endl;
	string6 = "Talk is cheap, show me your code!";
	cout << "string6: " << string6 << endl;
	cout << "string3: " << string3 << endl;
	system("pause");
	return 0;
}