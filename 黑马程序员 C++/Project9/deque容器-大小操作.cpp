#include<iostream>
#include<string>
#include<deque>
using namespace std;

//deque构造函数
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it = 10;  不可以修改
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
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;

		//deque没有容量的概念
	}

	//重新指定大小
	d1.resize(15, 1);
	cout << "d1的大小为：" << d1.size() << endl;
	printDeque(d1);

	d1.resize(5);
	cout << "d1的大小为：" << d1.size() << endl;
	printDeque(d1);

	d1.resize(10);
	cout << "d1的大小为：" << d1.size() << endl;
	printDeque(d1);
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}