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
	cout << "����ǰ�� " << endl;
	set<int>s1;
	s1.insert(10);  //ֻ�� Insert ���뷽�����һ��Զ��������ظ�ֵ
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	printSet(s1);

	cout << "s1.size(): " << s1.size() << endl;
	
	set<int>s2;
	s2.insert(50);
	printSet(s2);

	cout << "������ " << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}