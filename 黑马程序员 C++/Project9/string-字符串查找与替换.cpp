#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str1;
	str1 = "jiangyu";  // �� 0 ��ʼ����
	int pos0 = str1.find("g");  //�������Ҳ���
	int pos1 = str1.find("p");

	cout << "pos0: " << pos0 << endl;
	cout << "pos1: " << pos1 << endl;
}

void test02()
{
	string str2;
	str2 = "jiangyu";
	cout << "str2 = " << str2 << endl;  //jaingyu

	str2.replace(1, 3, "li");  //jligyu
	cout << "str2 = " << str2 << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	system("cls");
	return 0;
}