//#include <iostream>
//#include <string>
//using namespace std;
//
////常量引用：主要用来修饰形参，防止误操作
////在函数形参列表中，可以加const修饰形参，防止形参改变实参
//void showValue(const int& v)
//{
//	// v = 100;
//	cout << "v:" << v << endl;
//}
//
//int main()
//{
//	int a = 10;
//	//自动转换为 int* const ref = &a; 指针常量是指针指向不能更改
//
//	//int& ref = 10;  只是错误的，因为必须引用一块合法的内存空间
//
//	const int& ref = 10;  
//	// 这是可以的，加了const之后，编译器将代码更改 int temp = 10; const int & ref = temp;
//
//	showValue(a);  //10
//	cout << "a:" << a << endl;  //10
//
//	system("pause");
//	return 0;
//}