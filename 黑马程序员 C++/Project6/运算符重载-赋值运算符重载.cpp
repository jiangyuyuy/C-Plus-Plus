//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//
//	}
//
//	~Person()  //析构函数
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	//重载等号运算符
//	Person& operator=(Person& p)
//	{
//		//编译器是提供了浅拷贝
//		//m_age = p.m_age;
//		//应该先判断是否有属性在堆区，如果有，先释放干净，在进行深拷贝
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//
//		//深拷贝
//		m_age = new int(*p.m_age);
//		return *this;
//	}
//
//	int* m_age;
//};
//
//void test01()
//{
//	Person p1(10);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;  //赋值操作
//
//	cout << *p1.m_age << endl;
//	cout << *p2.m_age << endl;
//	cout << *p3.m_age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}