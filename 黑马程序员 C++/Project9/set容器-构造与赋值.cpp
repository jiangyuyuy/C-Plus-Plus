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

int main()
{
	set<int>s1;
	s1.insert(10);  //ֻ�� Insert ���뷽�����һ��Զ��������ظ�ֵ
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	printSet(s1);

	set<int>s2(s1);
	printSet(s2);

	set<int>s3;
	s3 = s1;
	printSet(s3);

	system("pause");
	return 0;
}