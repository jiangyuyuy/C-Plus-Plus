#include<iostream>
#include<string>
#include<vector>

#include<algorithm>  //��׼�㷨��ͷ�ļ�

using namespace std;

//vector�����д���Զ�����������
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

void test01()
{
	//����һ��vector��������
	vector<Person> v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);

	//���������������
	v.push_back(p1);
	v.push_back(p2);

	//���������е����ݣ�it ��ʾָ�룬��ַ��*it ��ʾ������
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������ " << (*it).m_name << ", ���䣺 " << (*it).m_age << endl;
		cout << "������ " << it->m_name << ", ���䣺 " << it->m_age << endl;
	}
}

void test02()
{
	//����һ��vector�������飬Person* Ϊ���Ԫ�صĵ�ַ
	vector<Person*> v1;

	Person p1("aaa", 10);
	Person p2("bbb", 20);

	//���������������
	v1.push_back(&p1);
	v1.push_back(&p2);

	//���������е�����, *it ��ʾָ�룬��ַ
	for (vector<Person*>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << "::������ " << (*it)->m_name << ", ���䣺 " << (*it)->m_age << endl;
		cout << "::������ " <<  (*(*it)).m_name << ", ���䣺 " << (*(*it)).m_age << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	system("cls");
	return 0;
}