#include<iostream>
#include<string>
using namespace std;

//类模板和函数模板的区别
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name: " << this->m_Name <<
			" age: " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
//1.类模板没有自动参数推到机制
void test01()
{
	//Person p("孙悟空", 1000); //无法自动推导参数类型
	Person<string, int>p("孙悟空", 1000);
	
	p.showPerson();
}

//2.类模板在模板参数列表中可以有默认参数
void test02()
{
	Person<string>p("猪八戒", 300);
	p.showPerson();
}

int main()
{
	test01();
	test02();
	system("pause");
	system("cls");
	return 0;
}