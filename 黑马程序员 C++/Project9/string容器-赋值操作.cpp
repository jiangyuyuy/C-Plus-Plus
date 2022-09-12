#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	str1 = "111";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = 'a';
	cout << "str2 = " << str2 << endl;

	string str3;
	str3.assign("222");
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("33333", 3);
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign(5, 'w');
	cout << "str5 = " << str5 << endl;
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}