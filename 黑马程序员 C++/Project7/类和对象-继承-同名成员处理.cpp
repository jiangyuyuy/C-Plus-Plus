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
////ͬ����Ա���Բ��Է�ʽ
//void test01()
//{
//	Son s;
//	cout << "s.m_a: " << s.m_a << endl;
//
//	//ͨ��������ʸ����е�ͬ����Ա����Ҫ���������
//	cout << "base.m_a: " << s.Base::m_a << endl;
//}
//
////ͬ����Ա�������Է�ʽ
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