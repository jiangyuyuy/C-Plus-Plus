//#include<iostream>
//#include<string>
//using namespace std;
//
////常函数：成员函数后加const后称为常函数
////常函数内不可以修饰成员属性
////成员属性声明时加入关键字mutable后，在常函数中依然可以修改
//
//class Person
//{
//public:
//	void ShowPerson() const
//	{
//		//this指针的本质：是指针常量，指针的指向是不可以修改的
//		// const Person * const this;
//		// this->m_a = 100;  不可以修改
//		this->m_b = 100;  //加了 mutable 关键字后，常函数指针可以修改
//	}
//
//	void func() {}  //非常函数
//
//	int m_a;
//	mutable int m_b;
//};
//
//void test01()
//{
//	Person p;
//	p.ShowPerson();
//}
//
//void test02()
//{
//	const Person p;  //在对象前加const，变为常对象
//	//p.m_a = 100;  不能更改
//	p.m_b = 100;
//	p.ShowPerson();
//
//	//p.func();  报错，因为常对象只能调用常函数，p 为常对象，而 func() 为非常函数
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}