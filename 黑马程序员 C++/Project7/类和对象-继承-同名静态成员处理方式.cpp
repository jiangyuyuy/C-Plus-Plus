//#include<iostream>
//#include<string>
//using namespace std;
//
////静态成员和非静态成员出现同名，处理方式一致
//class Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base - static void func(" << a << ")" << endl;
//	}
//};
//
//int Base::m_a = 100;
//
//class Son :public Base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//};
//
//int Son::m_a = 200;
//
//
////同名静态成员属性测试方式
//void test01()
//{
//
//	//1.通过对象访问静态成员
//	Son s;
//	cout << "s.m_a: " << s.m_a << endl;
//	//通过子类访问父类中的同名成员，需要添加作用域
//	cout << "base.m_a: " << s.Base::m_a << endl;
//
//	//2.通过类名访问
//	cout << "通过类名访问：" << endl;
//	cout << "  Son 下 m_a: " << Son::m_a << endl;
//	cout << "  Base 下 m_a: " << Son::Base::m_a << endl;
//}
//
////同名静态成员函数测试方式
//void test02()
//{
//
//	cout << "1.通过对象访问" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "2.通过类名访问" << endl;
//	Son::func();
//	Son::Base::func();
//	Son::Base::func(100);
//}
//
//int main()
//{
//	test01();
//	cout << "-----------------" << endl;
//	test02();
//	system("pause");
//	return 0;
//}