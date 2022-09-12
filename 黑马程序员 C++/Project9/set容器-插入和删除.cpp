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
	s1.insert(10);  //ֻ�� Insert ���뷽�����һ��Զ��������ظ�ֵ
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(0);
	printSet(s1);
	
	s1.erase(s1.begin());
	printSet(s1);

	s1.erase(10);
	printSet(s1);

	s1.clear();
	printSet(s1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}