#include<iostream>
#include<string>
#include<vector>

#include<algorithm>  //��׼�㷨��ͷ�ļ�

using namespace std;

void myPrint(int val)
{cout << val << endl;}

void test01()
{
	//����һ��vector��������
	vector<int> v;

	//�������ڲ�������
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	////1.��һ�ַ��� ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();  //��ʼ��������ָ�������ڵ�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();  //������������ָ�����������һ��Ԫ�ص���һ��λ��

	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	////2.�ڶ��ַ���
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//3.����STL�ṩ��������
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}