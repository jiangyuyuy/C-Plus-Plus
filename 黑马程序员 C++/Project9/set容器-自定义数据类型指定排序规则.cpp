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
		//�����併��
		return p1.m_age > p2.m_age;
	}
};

void test01()
{
	//�Զ����������ͣ�����ָ���������
	Person p1("����", 24);
	Person p2("����", 12);
	Person p3("�ŷ�", 25);
	Person p4("�˽�", 50);

	set<Person, comparePerson>s1;
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person, comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���䣺 " << (*it).m_age << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}