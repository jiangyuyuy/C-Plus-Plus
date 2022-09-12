#include<set>
#include<iostream>
#include<string>

using namespace std;

//����Ԫ�ض����ڲ���ʱ�Զ�����
//set/multiset ���ڹ���ʽ�������ײ�ṹ���ڶ������ṹ
//set�������������ظ���Ԫ��
//multiset�������ظ���Ԫ��

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(0);
	printSet(s1);

	//����Ԫ�أ����ص�����
	set<int>::iterator pos = s1.find(10);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ� " << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ���Ԫ��!" << endl;
	}

	set<int>::iterator pos1 = s1.find(50);
	if (pos1 != s1.end())
	{
		cout << "�ҵ�Ԫ�أ� " << *pos1 << endl;
	}
	else
	{
		cout << "δ�ҵ���Ԫ��!" << endl;
	}

	//ͳ��
	int num = s1.count(30);
	cout << "num: " << num << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}