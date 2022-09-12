#include<iostream>
#include<map>
using namespace std;

class MyCompare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

//map容器打印
void printMap(map<int, int, MyCompare>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " value: " << (*it).second << endl;
	}
	cout << endl;
}

// map 容器，不允许插入重复的 key 元素，默认排序为根据 key 从小到大进行排序
void test01()
{
	map<int, int, MyCompare>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(3, 20));
	m.insert(map<int, int>::value_type(2, 30));
	m[4] = 40;
	printMap(m);

}

int main()
{
	test01();
	system("pause");
	return 0;
}