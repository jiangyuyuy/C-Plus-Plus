#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	str1 = "111";
	
	string str2;
	str2 = "  222";
	cout << "str2 = " << str2 << endl;

	str1 += "  I Love You!";
	cout << "str1 = " << str1 << endl;

	str1 += str2;
	cout << "str1 = " << str1 << endl;

	str1.append("  jiangyu", 7);
	cout << "str1 = " << str1 << endl;

	str1.append(str2);
	cout << "str1 = " << str1 << endl;

	string str3;
	str3 = "--123456789--";
	str1.append(str3, 1, 10);
	cout << "str1 = " << str1 << endl;

}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}