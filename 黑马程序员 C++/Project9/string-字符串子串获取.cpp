#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	str1 = "jiangyu";  // 从 0 开始索引
	string sub_str = str1.substr(1, 3);  // ian
	cout << "sub_str = " << sub_str << endl;
	cout << "\n---------------\n" << endl;
}

void test02()
{
	string str1 = "242180@jiangyu.com";
	int pos = str1.find("@");
	string userid = str1.substr(0, pos);

	cout << "userid = " << userid << endl;

}

int main()
{
	test01();
	test02();
	system("pause");
	system("cls");
	return 0;
}