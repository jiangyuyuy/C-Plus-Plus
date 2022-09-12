#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 查找内置数据类型
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// 查找是否有元素 5
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到元素 5" << endl;
	}
	else
	{
		cout << "找到：" << *it << endl;
	}
}



int main()
{
	test01();
	system("pause");
	return 0;
}