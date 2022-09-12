#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
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
	cout << "排序前" << endl;
	deque<int>d1;
	d1.push_back(2);
	d1.push_back(5);
	d1.push_back(3);
	d1.push_back(1);
	d1.push_back(10);
	d1.push_back(6);
	d1.push_back(7);
	printDeque(d1);

	// 支持随机访问的迭代器容器，都可以使用 sort 方法进行排序 (vector, deque)
	cout << "排序后" << endl;
	sort(d1.begin(),d1.end());
	printDeque(d1);

}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}