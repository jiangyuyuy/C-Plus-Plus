#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// 仿函数
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class Transform
{
public:
	int operator()(int val)
	{
		return val;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>v_tar;
	v_tar.resize(10);  // 目标容器要提前开辟空间

	transform(v.begin(), v.end(), v_tar.begin(), Transform());

	for_each(v_tar.begin(), v_tar.end(), MyPrint());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}