#include<iostream>
#include<queue>
#include<list>
using namespace std;

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << endl;
	}
}

void test01()
{
	list<int>l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);

	printList(l1);

	list<int>l2;
	l2 = l1;
	printList(l2);

	list<int>l3(l2);
	printList(l3);

	list<int>l4(5, 1000);
	printList(l4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
