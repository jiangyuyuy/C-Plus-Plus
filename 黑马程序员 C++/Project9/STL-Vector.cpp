#include<iostream>
#include<string>
#include<vector>

#include<algorithm>  //标准算法的头文件

using namespace std;

void myPrint(int val)
{cout << val << endl;}

void test01()
{
	//创建一个vector容器数组
	vector<int> v;

	//向容器内插入数据
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	////1.第一种方法 通过迭代器访问容器中的数据
	//vector<int>::iterator itBegin = v.begin();  //起始迭代器，指向容器内第一个元素
	//vector<int>::iterator itEnd = v.end();  //结束迭代器，指向容器中最后一个元素的下一个位置

	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	////2.第二种方法
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}

	//3.利用STL提供遍历方法
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}