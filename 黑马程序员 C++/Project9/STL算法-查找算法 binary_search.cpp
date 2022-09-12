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
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	//二分查找要求有序序列，无序序列可能查找失败
	bool it = binary_search(v.begin(), v.end(), 2);
	if (it)
	{
		cout << "未找到元素" << endl;
	}
	else
	{
		cout << "找到元素：" << endl;
	}
}



int main()
{
	test01();
	system("pause");
	return 0;
}