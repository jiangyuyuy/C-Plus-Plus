#include<iostream>
#include<map>
using namespace std;

//map容器打印
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " value: " << (*it).second << endl;
	}
	cout << endl;
}

// map 容器，不允许插入重复的 key 元素
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(3, 20));
	m.insert(map<int, int>::value_type(2, 30));
	m[4] = 40;
	printMap(m);
	
	map<int, int>::iterator pos = m.find(2);
	if (pos != m.end());
	{
		cout << "查到了 key(2) = " << (*pos).first << " value： " << (*pos).second << endl;
	}
	
	int num = m.count(2);
	cout << "num(2): " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}