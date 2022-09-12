#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

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
	
	int num = count(v.begin(), v.end(), 3);
	cout << "num(3) = " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}