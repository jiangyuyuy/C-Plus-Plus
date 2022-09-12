#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	str1 = "jiyu";  // 从 0 开始索引
	
	str1.insert(0, "yu");
	cout << "str1 = " << str1 << endl;

	str1.insert(1, "11");
	cout << "str1 = " << str1 << endl;

	str1.erase(0, 2);
	cout << "str1 = " << str1 << endl;

}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}