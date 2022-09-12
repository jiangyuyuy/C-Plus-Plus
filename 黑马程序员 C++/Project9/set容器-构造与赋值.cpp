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

int main()
{
	set<int>s1;
	s1.insert(10);  //只有 Insert 插入方法，且会自动排序，无重复值
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	printSet(s1);

	set<int>s2(s1);
	printSet(s2);

	set<int>s3;
	s3 = s1;
	printSet(s3);

	system("pause");
	return 0;
}