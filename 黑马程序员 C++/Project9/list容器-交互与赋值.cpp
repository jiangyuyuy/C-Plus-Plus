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
	cout << endl;
}

void test01()
{
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	printList(l1);

	list<int>l2;
	l2.assign(l1.begin(), l1.end());
	printList(l2);

	list<int>l4;
	l4.assign(5, 100);
	printList(l4);

	cout << "\n������" << endl;
	l2.swap(l4);
	cout << "l2: " << endl;
	printList(l2);
	cout << "l4: " << endl;
	printList(l4);

}

int main()
{
	test01();
	system("pause");
	return 0;
}
