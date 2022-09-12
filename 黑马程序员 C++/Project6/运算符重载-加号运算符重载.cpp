//#include<iostream>
//#include<string>
//using namespace std;
//
////对已有的运算符进行重新定义，赋予其另一种功能
//class Person
//{
//public:
//	Person() {};
//	Person(int a, int b)
//	{
//		this->m_a = a;
//		this->m_b = b;
//	}
//
//	//成员函数重载
//	Person operator+(const Person& p)
//	{
//		Person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//
//
//	int m_a;
//	int m_b;
//};
//
////全局函数重载
////Person operator+(Person& p1, Person& p2)
////{
////	Person temp;
////	temp.m_a = p1.m_a + p2.m_a;
////	temp.m_b = p1.m_b + p2.m_b;
////	return temp;
////}
//
//Person operator+(Person& p1, int k)
//{
//	Person temp;
//	temp.m_a = p1.m_a + k;
//	temp.m_b = p1.m_b + k;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 20;
//	Person p2;
//	p2.m_a = 15;
//	p2.m_b = 25;
//
//	// Person p3 = p1.operator+(p2);
//	Person p3 = p1 + p2;
//
//	// Person p3 = operator+(p1, p2);
//	Person p4 = p1 + 100;
//
//	cout << "p3.m_a: " << p3.m_a << endl;
//	cout << "p3.m_b: " << p3.m_b << endl;
//
//	cout << "p4.m_a: " << p4.m_a << endl;
//	cout << "p4.m_b: " << p4.m_b << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}