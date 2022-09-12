//#include<iostream>
//#include<string>
//using namespace std;
//
////this指针指向 被调用的成员函数所属的 对象
////this指针是隐含每一个非静态的成员函数内的一种指针
////this不需要定义，直接使用即可
//
////this指针的用途：
////1.当形参和成员变量同名时，可以使用this指针来区分
////2.在类的非静态成员函数中返回对象本身，可以使用 return *this
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person & PersonAddage(Person& p)  //用引用的方式返回，不会创建一个新对象
//	{
//		this->age += p.age;
//
//		//this 指向 p2 的指针，*this 指向 p2 的本体
//		return *this;
//	}
//
//	int age;
//};
//
//void test1()
//{
//	Person p1(18);
//	cout << "p1.age: " << p1.age << endl;
//}
//
//void test2()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	p2.PersonAddage(p1);
//
//	cout << "p2.age: " << p2.age << endl;
//
//	p2.PersonAddage(p1).PersonAddage(p1);  //链式编程思想
//
//	cout << "p2.age: " << p2.age << endl;
//}
//
//int main()
//{
//	test1();  //18
//	test2();  //20  40
//	system("pause");
//	return 0;
//}