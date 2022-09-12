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
1.empty();  判断是容器是否为空
2.capacity();  容器的容量
3.size();  返回容器中元素的个数
4.resize(int num);  重新指定容器长度为 num，若容器变长，则以默认值填充
					若容器变短，则删除超出长度的元素
5.resize(int num, elem);  重新指定容器长度为 num，若容器变长，则以elem填充新位置
						  若容器变短，则删除超出长度的元素
*/
void test01()
{
	//1.默认构造容器
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15);
	printVector(v1);
	cout << "v1的新的大小1为：" << v1.size() << endl;

	v1.resize(20, 'yu');
	printVector(v1);
	cout << "v1的新的大小2为：" << v1.size() << endl;

	v1.resize(10);
	printVector(v1);
	cout << "v1的新的大小3为：" << v1.size() << endl;

	/*
	0 1 2 3 4 5 6 7 8 9
	v1不为空
	v1的容量为：13
	v1的大小为：10
	0 1 2 3 4 5 6 7 8 9 0 0 0 0 0
	v1的新的大小1为：15
	0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 31093 31093 31093 31093 31093
	v1的新的大小2为：20
	0 1 2 3 4 5 6 7 8 9
	v1的新的大小3为：10
	*/
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}