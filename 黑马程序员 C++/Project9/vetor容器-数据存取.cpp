#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
/*
1.at(int idx);  返回索引 idx 处的数据
2.operator[];  返回索引 idx 处的数据
3.front();  返回容器中的第一个元素数据
4.back();  返回容器中最后一个元素
*/
void test01()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	printVector(v1);

	cout << "v1.at(0): " << v1.at(0) << endl;
	cout << "v1[1]: " << v1[1] << endl;
	cout << "v1.front: " << v1.front() << endl;
	cout << "v1.back: " << v1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}