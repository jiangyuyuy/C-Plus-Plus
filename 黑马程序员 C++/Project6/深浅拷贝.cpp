//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person()  //���캯���Ĵ���
//	{
//		cout << "Ĭ�Ϲ��캯���ĵ���..." << endl;
//	}
//
//	Person(int age, int height)  //�вι��캯���Ĵ���
//	{
//		m_age = age;
//		m_height = new int(height);
//
//		cout << "�вι��캯���ĵ���..." << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person ���������ĵ���" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//
//	~Person()  //���������Ĵ���
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;  //�ͷŶ�������
//			m_height = NULL;
//		}
//		cout << "���������ĵ���..." << endl;
//	}
//
//	int m_age;
//	int *m_height;
//};
//
//void test01()
//{
//	Person p1(18, 160);
//	cout << "p1 �������ǣ�" << p1.m_age << endl;
//	cout << "p1 ������ǣ�" << *p1.m_height << endl;
//
//	Person p2(p1);
//	cout << "p1 �������ǣ�" << p2.m_age << endl;
//	cout << "p1 ������ǣ�" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}