#include <iostream>
#include <string>
unsigned int c_int_str(const char * str, char ch);
int main()
{
	using namespace std;
	char mmm[15] = "minimum";
	const char *wail = "ululate";

	unsigned int ms = c_int_str(mmm, 'm');
	unsigned int us = c_int_str(wail, 'u');
	cout << ms << " m character in " << mmm << endl;
	cout << us << " u character in " << wail << endl;
	system("pause");
	return 0;
}
unsigned int c_int_str(const char * str, char ch)
{
	unsigned int count = 0;
	
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}