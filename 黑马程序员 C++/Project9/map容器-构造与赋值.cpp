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
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(3, 15));
	m.insert(pair<int, int>(4, 20));

	printMap(m);

	//��ֵ
	map<int, int>m1;
	m1 = m;
	printMap(m1);

	//��������
	map<int, int>m2(m);
	printMap(m2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}