//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_a = 100;
//	}
//	int m_a;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_a = 120;
//	}
//	int m_a;
//};
//
//class Son:public Base1, public Base2
//{
//public:
//
//	Son()
//	{
//		m_c = 200;
//		m_d = 300;
//	}
//	int m_c;
//	int m_d;
//};
//
//void test01()
//{
//	Son s;
//	
//	cout << "sizeof Son: " << sizeof(s) << endl;
//	cout << "Base1.m_a: " << s.Base1::m_a << endl;
//	cout << "Base2.m_a: " << s.Base2::m_a << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}