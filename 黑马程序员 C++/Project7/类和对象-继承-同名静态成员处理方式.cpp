//#include<iostream>
//#include<string>
//using namespace std;
//
////��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽһ��
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
////ͬ����̬��Ա���Բ��Է�ʽ
//void test01()
//{
//
//	//1.ͨ��������ʾ�̬��Ա
//	Son s;
//	cout << "s.m_a: " << s.m_a << endl;
//	//ͨ��������ʸ����е�ͬ����Ա����Ҫ���������
//	cout << "base.m_a: " << s.Base::m_a << endl;
//
//	//2.ͨ����������
//	cout << "ͨ���������ʣ�" << endl;
//	cout << "  Son �� m_a: " << Son::m_a << endl;
//	cout << "  Base �� m_a: " << Son::Base::m_a << endl;
//}
//
////ͬ����̬��Ա�������Է�ʽ
//void test02()
//{
//
//	cout << "1.ͨ���������" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	cout << "2.ͨ����������" << endl;
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