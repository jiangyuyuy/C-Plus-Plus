#include <iostream>
#include <string>
using namespace std;

//类模板对象做函数参数
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
		cout << "姓名: " << this->m_name <<
			" age: " << this->m_age << endl;
	}
	string m_name;
	int m_age;
};

//1.制定传入类型--最常用的方法
void printPerson1(Person<string, int>& p)
{
	p.showPerson();
}

void test01()
{
	Person<string, int>p("孙悟空", 1000);
	printPerson1(p);
}

//2.参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int>p("猪八戒", 500);
	printPerson2(p);
}

//3.整个类模板化
template<class T>
void printPerson3(T &p)
{
	p.showPerson();
}

void test03()
{
	Person<string, int>p("唐僧", 10000);
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