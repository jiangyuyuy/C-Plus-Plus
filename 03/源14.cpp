//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int m_a, int m_b)
//	{
//		this->m_a = m_a;
//		this->m_b = m_b;
//	}
//	void setPerson() const  //常函数
//		// this指针本质是指针常量，指向不可以更改，相当于 Person * const this;
//	{
//		// void showPerson() const{} 相当于 const Person * const this; 指向和指向的值都不可以修改
//		// 若要修改，则要加 mutable 关键字
//		// m_a = 10;  // 等同于 this->m_a;
//		m_b = 20;
//	}
//	void func1() {}
//	void func2() const { cout << "常函数func2()调用" << endl; }
//	int m_a;
//	mutable int m_b;
//};
//
//int main()
//{
//	Person p(100, 200);
//	cout << "m_a: " << p.m_a << ", " << "m_b: " << p.m_b << endl;
//
//	p.setPerson();
//	cout << "m_a: " << p.m_a << ", " << "m_b: " << p.m_b << endl;
//
//	// 常对象
//	const Person p1(1, 2);
//	// p1.m_a = 3;  // 常对象属性不可以修改
//	p1.m_b = 4;  // 加了mutable关键字可以修改
//	// p1.func1();  //常对象只能调用常函数
//	p1.func2();
//	
//
//	system("pause");
//	return 0;
//}