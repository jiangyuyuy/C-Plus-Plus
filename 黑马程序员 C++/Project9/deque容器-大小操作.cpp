#include<iostream>
#include<string>
#include<deque>
using namespace std;

//deque���캯��
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it = 10;  �������޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	
	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;

		//dequeû�������ĸ���
	}

	//����ָ����С
	d1.resize(15, 1);
	cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
	printDeque(d1);

	d1.resize(5);
	cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
	printDeque(d1);

	d1.resize(10);
	cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
	printDeque(d1);
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}