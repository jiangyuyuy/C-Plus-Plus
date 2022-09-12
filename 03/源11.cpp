//#include<iostream>
//#include<string>
//using namespace std;
//
//// 静态成员函数只能访问静态成员变量
//class Person
//{
//public:
//	static void func()
//	{
//		m = 200;
//		// n = 100;  //非静态成员静态函数无法访问
//		cout << "静态函数的调用, m = " << m << endl;
//	}
//	static int m;
//	int n;
//};
//
//int Person::m = 100;
//
//int main()
//{
//	Person p;
//	p.func();
//
//	Person::func();
//	system("pause");
//	return 0;
//}