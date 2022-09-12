#include<set>
#include<iostream>
#include<string>

using namespace std;

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

class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		//按年龄降序
		return p1.m_age > p2.m_age;
	}
};

void test01()
{
	//自定义数据类型，都会指定排序规则
	Person p1("刘备", 24);
	Person p2("关羽", 12);
	Person p3("张飞", 25);
	Person p4("八戒", 50);

	set<Person, comparePerson>s1;
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person, comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << " 年龄： " << (*it).m_age << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}