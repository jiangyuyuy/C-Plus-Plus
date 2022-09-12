//#include<iostream>
//#include<string>
//using namespace std;
//
//// 静态成员变量
//// 1.所有对象共用同一份数据，不属于某个对象
//// 2.编译阶段就分配内存
//// 3.类内声明，内外定义
//// 4.可以通过类名直接访问静态数据
//
//class Person
//{
//public:
//	static int m_a;
//};
//
//int Person::m_a = 100;
// 
//int main()
//{
//	cout << "m_a: " << Person::m_a << endl;
//
//	Person p;
//	cout << "m_a: " << p.m_a << endl;
//
//	Person p1;
//	p1.m_a = 200;
//	cout << "m_a: " << p.m_a << endl;
//
//	system("pause");
//	return 0;
//}