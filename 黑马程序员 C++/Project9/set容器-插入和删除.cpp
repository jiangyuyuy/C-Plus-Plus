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
	s1.insert(10);  //只有 Insert 插入方法，且会自动排序，无重复值
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(0);
	printSet(s1);
	
	s1.erase(s1.begin());
	printSet(s1);

	s1.erase(10);
	printSet(s1);

	s1.clear();
	printSet(s1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}