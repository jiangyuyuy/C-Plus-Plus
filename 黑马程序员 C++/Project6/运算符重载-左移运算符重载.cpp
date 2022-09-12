//#include<iostream>
//#include<string>
//using namespace std;
//
////对已有的运算符进行重新定义，赋予其另一种功能
//class Person
//{
//public:
//	Person(int a, int b)
//	{
//		m_a = a;
//		m_b = b;
//	}
//	friend ostream& operator<<(ostream& out, Person& p);
//
//private:
//	
//	int m_a;
//	int m_b;
//};
//
//ostream &operator<<(ostream &out, Person &p)
//{
//	out << "m_a: " << p.m_a << " m_b: " << p.m_b << endl;
//	return out;
//}
//
//void test01()
//{
//	Person p(10, 30);
//
//	cout << p << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}