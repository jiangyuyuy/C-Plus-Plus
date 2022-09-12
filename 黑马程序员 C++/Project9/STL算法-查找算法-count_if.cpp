#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Greater
{
public:
	bool operator()(int val)
	{
		return val > 1;
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

	int num = count_if(v.begin(), v.end(), Greater());
	cout << "num = " << num << endl;
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};


class AgeGreat
{
public:
	bool operator()(const Person& p)
	{
		return p.m_age > 20;
	}
};
void test02()
{
	vector<Person>v;

	Person p1("a", 20);
	Person p2("b", 30);
	Person p3("c", 30);
	Person p4("d", 25);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//统计大于20的人数
	int num1 = count_if(v.begin(), v.end(), AgeGreat());
	cout << "num1 = " << num1 << endl;
}


int main()
{
	test01(); 
	test02();
	system("pause");
	return 0;
}