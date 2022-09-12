#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	str1 = "zaji";  // 从 0 开始索引
	string str2;
	str2 = "iangy";

	if (str1.compare(str2) == 0)
	{
		cout << "sstr1 == str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}

}

void test02()
{

}

int main()
{
	test01();
	test02();
	system("pause");
	system("cls");
	return 0;
}