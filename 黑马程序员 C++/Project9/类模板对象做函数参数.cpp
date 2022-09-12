#include <iostream>
#include <string>
using namespace std;

//��ģ���������������
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showPerson()
	{
		cout << "����: " << this->m_name <<
			" age: " << this->m_age << endl;
	}
	string m_name;
	int m_age;
};

//1.�ƶ���������--��õķ���
void printPerson1(Person<string, int>& p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int>p("�����", 1000);
	printPerson1(p);
}

//2.����ģ�廯
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int>p("��˽�", 500);
	printPerson2(p);
}

//3.������ģ�廯
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
}

void test03()
{
	Person<string, int>p("��ɮ", 10000);
	printPerson3(p);
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	system("cls");
}