//#include<iostream>
//#include<string>
//using namespace std;
//
////静态成员就是成员变量和成员函数前面加上 static，简称静态成员
////静态成员变量
////所有对象共享一份数据，在编译阶段分配内存，类内声明类外初始化
//
//class Person
//{
//public:
//	static int m_a;
//
//private:
//	//静态变量也有访问权限
//	static int m_b;
//};
//
//int Person::m_b = 200;
//int Person::m_a = 100;
//
//void test01()
//{
//	Person p;
//	cout << "p.m_a: " << p.m_a << endl;
//
//	Person p1;
//	p1.m_a = 200;
//	cout << "p1.m_a: " << p.m_a << endl;
//}
//
//void test02()
//{
//	//通过类名访问静态变量
//	cout << Person::m_a << endl;
//	//cout << Person::m_b << endl;  私有权限访问不到
//}
//
//
////静态成员函数
////所有对象共享同一个函数
////静态成员函数只能访问静态成员变量
//
//class Person1
//{
//public:
//	//静态成员函数
//	static void func()
//	{
//		m_c = 0;  //静态成员函数可以访问静态成员变量
//		//m_d = 200;  静态成员函数不可以访问非静态成员变量
//		cout << "static void func()调用..." << endl;
//	}
//
//	static int m_c;  //静态成员变量
//	int m_d;  //非静态成员变量
//
//private:
//	static void func1()
//	{
//		cout << "function1() 的调用..." << endl;
//	}
//};
//
//int Person1::m_c = 1000;
//
//void test03()
//{
//	//两种访问方式
//	//1.通过对象访问
//	Person1 p1;
//	p1.func();
//
//	//2.通过类名访问
//	Person1::func();
//	//Person1::func1();  不可访问静态成员函数
//}
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}