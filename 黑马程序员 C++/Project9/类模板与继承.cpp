#include <iostream>
#include <string>
using namespace std;

//类模板与继承
//1.当子类继承的父类是一个类模板时，子类在声明的时候要指定出父类中T的类型
//2.如果不指定，编译器无法给子类分配内存
//3.如果想灵活指定出父类中T的类型，子类也需要变为类模板

template<class T>
class Base
{
	T m;
};

class Son :public Base<int>
{

};

void test01()
{
	Son s1;
}

int main()
{
	test01();
	system("pause");
	system("cls");
}