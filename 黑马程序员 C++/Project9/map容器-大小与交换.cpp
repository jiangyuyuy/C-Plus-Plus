#include<iostream>
#include<map>
using namespace std;

//map������ӡ
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " value: " << (*it).second << endl;
	}
	cout << endl;
}

//map����
void test01()
{
	cout << "m��m1����ǰ��" << endl;
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 15));
	m.insert(pair<int, int>(4, 20));
	cout << "m: " << endl;
	printMap(m);

	map<int, int>m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 30));
	cout << "m1: " << endl;
	printMap(m1);
	

	cout << "m��m1���н�����" << endl;

	m.swap(m1);
	cout << "m: " << endl;
	printMap(m);
	cout << "m1: " << endl;
	printMap(m1);

	if (m.empty())
	{
		cout << "m is empty!" << endl;
	}
	else
	{
		cout << "m not is empty!" << endl;
	}
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}