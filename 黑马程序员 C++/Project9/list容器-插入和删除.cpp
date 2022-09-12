#include<iostream>
#include<queue>
#include<list>
using namespace std;

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	if (l.empty())
	{
		cout << "list����Ϊ�գ�" << endl;
	}
	cout << endl;
}

void test01()
{
	list<int>l1;

	//����β������Ԫ��
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	printList(l1);
	
	//����ͷ������Ԫ��
	l1.push_front(10);
	l1.push_front(20);
	l1.push_front(30);
	printList(l1);

	//����ͷ��ɾ��Ԫ��
	l1.pop_front();
	printList(l1);

	//����β��ɾ��Ԫ��
	l1.pop_back();
	printList(l1);

	//ָ��λ�ò���Ԫ�أ�ɾ��Ԫ��
	//������ƫ��
	list<int>::iterator it = l1.begin();

	l1.insert(++it, 500);
	printList(l1);

	l1.erase( ++it);
	printList(l1);

	l1.push_back(10);
	l1.push_front(10);
	printList(l1);

	l1.remove(10);  //ɾ������10��Ԫ��
	printList(l1);

	l1.insert(l1.begin(), 1000);
	printList(l1);

	l1.insert(l1.begin(), 3, 1997);
	printList(l1);

	l1.clear();
	printList(l1);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
