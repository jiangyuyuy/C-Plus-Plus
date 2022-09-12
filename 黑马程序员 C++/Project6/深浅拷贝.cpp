//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person()  //构造函数的创建
//	{
//		cout << "默认构造函数的调用..." << endl;
//	}
//
//	Person(int age, int height)  //有参构造函数的创建
//	{
//		m_age = age;
//		m_height = new int(height);
//
//		cout << "有参构造函数的调用..." << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person 拷贝函数的调用" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//
//	~Person()  //析构函数的创建
//	{
//		if (m_height != NULL)
//		{
//			delete m_height;  //释放堆区数据
//			m_height = NULL;
//		}
//		cout << "析构函数的调用..." << endl;
//	}
//
//	int m_age;
//	int *m_height;
//};
//
//void test01()
//{
//	Person p1(18, 160);
//	cout << "p1 的年龄是：" << p1.m_age << endl;
//	cout << "p1 的身高是：" << *p1.m_height << endl;
//
//	Person p2(p1);
//	cout << "p1 的年龄是：" << p2.m_age << endl;
//	cout << "p1 的身高是：" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}