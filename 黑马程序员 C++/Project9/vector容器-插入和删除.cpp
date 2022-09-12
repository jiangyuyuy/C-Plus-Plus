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
1.push_back(elem);  尾部插入元素
2.pop_back();  删除最后一个元素
3.insert(const_iterator pos, elem);  迭代器指向位置 pos 插入元素插入元素 elem
4.insert(const_iterator pos, int cout, elem);  迭代器指向 pos 插入 num 个元素 elem
5.erase(const_iterator pos);  删除迭代器指向的元素
6.erase(const_iterator start, const_iterator end);  删除迭代器从 start 到 end 之间的元素
7.clear();  删除容器中所有的元素 
*/
void test01()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	printVector(v1);

	v1.pop_back();
	printVector(v1);

	v1.insert(v1.begin(), 0);
	printVector(v1);

	v1.insert(v1.begin(), 5, 100);
	printVector(v1);

	v1.erase(v1.begin());
	printVector(v1);

	v1.erase(v1.begin(), v1.begin() + 4);
	printVector(v1);

	v1.clear();
	printVector(v1);

	/*
	10 20 30 40
	10 20 30
	0 10 20 30
	100 100 100 100 100 0 10 20 30
	100 100 100 100 0 10 20 30
	0 10 20 30

	*/
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}