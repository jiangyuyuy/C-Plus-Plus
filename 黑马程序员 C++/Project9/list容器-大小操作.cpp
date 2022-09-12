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

	if (l1.empty())
	{
		cout << "该list容器为空！" << endl;
	}
	else
	{
		cout << "l1的大小为：" << l1.size() << endl;
		
		//重新指定大小
		l1.resize(5);
		cout << "l1的大小为：" << l1.size() << endl;
		printList(l1);

		l1.resize(10, 5);
		cout << "l1的大小为：" << l1.size() << endl;
		printList(l1);
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}
