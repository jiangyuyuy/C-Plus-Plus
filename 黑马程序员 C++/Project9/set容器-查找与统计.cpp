#include<set>
#include<iostream>
#include<string>

using namespace std;

//所有元素都会在插入时自动排序
//set/multiset 属于关联式容器，底层结构属于二叉树结构
//set容器不允许有重复的元素
//multiset允许有重复的元素

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(0);
	printSet(s1);

	//查找元素，返回迭代器
	set<int>::iterator pos = s1.find(10);
	if (pos != s1.end())
	{
		cout << "找到元素： " << *pos << endl;
	}
	else
	{
		cout << "未找到该元素!" << endl;
	}

	set<int>::iterator pos1 = s1.find(50);
	if (pos1 != s1.end())
	{
		cout << "找到元素： " << *pos1 << endl;
	}
	else
	{
		cout << "未找到该元素!" << endl;
	}

	//统计
	int num = s1.count(30);
	cout << "num: " << num << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}