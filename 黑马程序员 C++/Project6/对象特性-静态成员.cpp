//#include<iostream>
//#include<string>
//using namespace std;
//
////��̬��Ա���ǳ�Ա�����ͳ�Ա����ǰ����� static����ƾ�̬��Ա
////��̬��Ա����
////���ж�����һ�����ݣ��ڱ���׶η����ڴ棬�������������ʼ��
//
//class Person
//{
//public:
//	static int m_a;
//
//private:
//	//��̬����Ҳ�з���Ȩ��
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
//	//ͨ���������ʾ�̬����
//	cout << Person::m_a << endl;
//	//cout << Person::m_b << endl;  ˽��Ȩ�޷��ʲ���
//}
//
//
////��̬��Ա����
////���ж�����ͬһ������
////��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//
//class Person1
//{
//public:
//	//��̬��Ա����
//	static void func()
//	{
//		m_c = 0;  //��̬��Ա�������Է��ʾ�̬��Ա����
//		//m_d = 200;  ��̬��Ա���������Է��ʷǾ�̬��Ա����
//		cout << "static void func()����..." << endl;
//	}
//
//	static int m_c;  //��̬��Ա����
//	int m_d;  //�Ǿ�̬��Ա����
//
//private:
//	static void func1()
//	{
//		cout << "function1() �ĵ���..." << endl;
//	}
//};
//
//int Person1::m_c = 1000;
//
//void test03()
//{
//	//���ַ��ʷ�ʽ
//	//1.ͨ���������
//	Person1 p1;
//	p1.func();
//
//	//2.ͨ����������
//	Person1::func();
//	//Person1::func1();  ���ɷ��ʾ�̬��Ա����
//}
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}