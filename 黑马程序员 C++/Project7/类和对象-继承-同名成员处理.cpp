//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_a = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()" << endl;
//	}
//
//	int m_a;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_a = 150;
//	}
//
//	void func()
//	{
//		cout << "Son - func()" << endl;
//	}
//
//	int m_a;
//};
//
////同名成员属性测试方式
//void test01()
//{
//	Son s;
//	cout << "s.m_a: " << s.m_a << endl;
//
//	//通过子类访问父类中的同名成员，需要添加作用域
//	cout << "base.m_a: " << s.Base::m_a << endl;
//}
//
////同名成员函数测试方式
//void test02()
//{
//	Son s;
//	s.Base::func();
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}