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

	cout << "d1.at(0): " << d1.at(0) << endl;
	cout << "d1[1]: " << d1[1] << endl;
	cout << "d1.front(): " << d1.front() << endl;
	cout << "d1.back(): " << d1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}