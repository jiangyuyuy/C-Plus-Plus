#include<iostream>
#include<string>
#include<vector>

#include<algorithm>  //��׼�㷨��ͷ�ļ�

using namespace std;

/*
string���캯��
1.string*();
2.string(const char* s)
3.string(const string& str)
4.string(int n, char c);
*/

void test01()
{
	string s1;  //Ĭ�Ϲ���

	const char * str = "hello world";  // C�����ַ���

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