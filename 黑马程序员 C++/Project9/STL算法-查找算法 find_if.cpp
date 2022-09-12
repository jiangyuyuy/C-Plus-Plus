#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

// 查找内置数据类型
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// 查找是否有元素大于 5
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "没有找到大于 5 的元素" << endl;
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