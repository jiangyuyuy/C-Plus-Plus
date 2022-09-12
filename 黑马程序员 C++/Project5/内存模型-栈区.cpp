//#include <iostream>
//#include <string>
//using namespace std;
//
//int * func()
//{
//	int a = 10;  //局部变量放在栈区(栈区存放:形参，局部变量)，函数运行完之后栈区的数据自动释放
//	return &a;  //返回局部变量的地址
//}
//
//int main()
//{
//	int * p = func();
//	cout << *p << endl;  //第一次可以打印，因为编译器一次保留  x86系统有效，x64系统两次都可以打印
//	cout << *p << endl;  //第二次不会保留(x86)
//
//	system("pause");
//	return 0;
//}