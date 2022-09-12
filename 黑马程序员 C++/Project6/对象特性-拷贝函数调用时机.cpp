//#include<iostream>
//#include<string>
//using namespace std;
//
////拷贝函数调用时机
////1.使用一个已经创建好的对象来初始化一个新对象
////2.值传递的方式给函数参数传值
////3.以值方式返回局部变量
//
////构造函数调用规则
////创建一个类，C++编译器会默认给类添加至少三个函数
////默认构造 析构函数 拷贝构造
//
////如果用户定义有参构造函数，C++不在提供无参构造函数，但是会提供拷贝构造函数
////如果用户定义了拷贝构造函数，则不会提供其它构造函数
//
//class Person
//{
//public:
//	Person()  //构造函数的创建
//	{
//		cout << "默认构造函数的调用..." << endl;
//	}
//
//	Person(int a)  //有参构造函数的创建
//	{
//		age = a;
//		cout << "有参构造函数的调用..." << endl;
//	}
//
//	Person(const Person& p)  //拷贝构造函数
//	{
//		age = p.age;
//		cout << "拷贝构造函数的调用..." << endl;
//		cout << "age:" << age << endl;
//	}
//
//	~Person()  //析构函数的创建
//	{
//		cout << "析构函数的调用..." << endl;
//	}
//
//	int age;
//};
//
//void test01()
//{
//	//1.使用一个已经创建好的对象来初始化一个新对象
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2.age:" << p2.age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}