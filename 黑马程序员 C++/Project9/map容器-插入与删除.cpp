#include<iostream>
#include<map>
using namespace std;

//mapÈİÆ÷´òÓ¡
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key: " << (*it).first << " value: " << (*it).second << endl;
	}
	cout << endl;
}

//mapÈİÆ÷
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(3, 20));
	m.insert(map<int, int>::value_type(2, 30));
	m[4] = 40;
	printMap(m);

	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	m.erase(m.begin(), m.end());

}

int main()
{
	test01();
	system("pause");
	return 0;
}