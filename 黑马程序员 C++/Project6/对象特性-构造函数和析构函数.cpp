//#include<iostream>
//#include<string>
//using namespace std;
//
////构造函数  类名(){},可以有参数，没有返回值，不需要void
////主要作用是创建对象时为对象的成员属性赋值
////析构函数  ~类名(){}，不可以有参数
////主要作用是对象销毁前系统自动调用进行清理
//
//class Person
//{
//public:
//	Person()  //构造函数的创建
//	{
//		cout << "构造函数的调用..." << endl;
//	}
//
//	~Person()  //析构函数的创建
//	{
//		cout << "析构函数的调用..." << endl;
//	}
//};
//
//void test01()
//{
//	Person p;  //局部变量，数据咋栈上，test01执行完后会自动释放这个对象
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}