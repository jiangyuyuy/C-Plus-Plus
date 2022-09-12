#include<iostream>
#include<string>
#include<vector>

#include<algorithm>  //标准算法的头文件

using namespace std;

/*
string构造函数
1.string*();
2.string(const char* s)
3.string(const string& str)
4.string(int n, char c);
*/

void test01()
{
	string s1;  //默认构造

	const char * str = "hello world";  // C语言字符串

	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'q');
	cout << "s4 = " << s4 << endl;
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}