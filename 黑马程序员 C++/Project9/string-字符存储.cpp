#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	str1 = "jiyu";  // 从 0 开始索引
	for (int i = 0; i < str1.size(); i++)
	{
		cout << "str1[" << i << "] = " << str1[i] << endl;
		cout << "str1[" << i << "] = " << str1.at(i) << endl;
	}

	str1[0] = 'y';
	for (int i = 0; i < str1.size(); i++)
	{
		cout << "::str1[" << i << "] = " << str1[i] << endl;
		cout << "::str1[" << i << "] = " << str1.at(i) << endl;
	}

}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}