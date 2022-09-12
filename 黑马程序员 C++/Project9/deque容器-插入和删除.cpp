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

	cout << "\n尾插" << endl;
	d1.push_back(10);
	d1.push_back(20);
	printDeque(d1);

	cout << "\n头插" << endl;
	d1.push_front(10);
	d1.push_front(20);
	printDeque(d1);

	cout << "\n指定位置插入1" << endl;
	d1.insert(d1.begin(), 1000);
	printDeque(d1);

	cout << "\n指定位置插入2" << endl;
	d1.insert(d1.begin(), 4, 500);
	printDeque(d1);

	cout << "\n区间插入" << endl;
	d1.insert(d1.begin(),d1.begin(),d1.begin()+2);
	printDeque(d1);
	
	cout << "\n尾删" << endl;
	d1.pop_back();
	printDeque(d1);

	cout << "\n头删" << endl;
	d1.pop_front();
	printDeque(d1);	

	cout << "\n指定位置删除" << endl;
	d1.erase(d1.begin(), d1.begin()+2);
	printDeque(d1);
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}