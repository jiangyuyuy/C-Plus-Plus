#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Person; // 要提前让编译器知道有Person这个类存在

//全局函数，类外实现，不用加作用域
template<class T1, class T2>
void printPerson2(Person<T1, T2>p1)
{
	cout << "p.name: " << p1.m_name << " p.age: " << p1.m_age << endl;
}

//通过全局函数打印 Person 的信息
template<class T1, class T2>
class Person
{
	//全局函数，类内实现
	friend void printPerson1(Person<T1, T2>p)
	{
		cout << "p.name: " << p.m_name << " p.age: " << p.m_age << endl;
	}

	//全局函数，类外实现，要加空的参数列表变成模板函数
	friend void printPerson2<>(Person<T1, T2>p);

public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:
	T1 m_name;
	T2 m_age;
};




void test01()
{
	Person<string, int>p("Rom", 100);
	printPerson1(p);

	Person<string, int>p1("Tom", 500);
	printPerson2(p1);
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}