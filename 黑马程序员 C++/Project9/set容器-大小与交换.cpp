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
	cout << "交换前： " << endl;
	set<int>s1;
	s1.insert(10);  //只有 Insert 插入方法，且会自动排序，无重复值
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	printSet(s1);

	cout << "s1.size(): " << s1.size() << endl;
	
	set<int>s2;
	s2.insert(50);
	printSet(s2);

	cout << "交换后： " << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}