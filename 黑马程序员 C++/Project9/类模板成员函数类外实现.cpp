#include <iostream>
#include <string>
using namespace std;

//类模板成员函数类外实现
template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	//{
	//	this->m_name = name;
	//	this->m_age = age;
	//}

	void showPerson();
	//{
	//	cout << "姓名： " << this->m_name endl;
	//}

	T1 m_name;
	T2 m_age;
};

//构造函数的类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

//成员函数的内外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名: " << this->m_name <<
		", 年龄：" << m_age << endl;
}

void test01()
{
	Person<string, int>P("Tom", 300);
	P.showPerson();
}


int main()
{
	test01();

	system("pause");
	system("cls");
}