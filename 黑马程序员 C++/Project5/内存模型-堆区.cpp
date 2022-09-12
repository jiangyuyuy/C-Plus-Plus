//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int * func()
//{
//	//利用new关键字，可以将数据开辟到堆区，堆区的数据是由程序员管理的，系统不会自动释放
//	//指针 本质也是局部变量 放在栈区 指针保存的数据放在栈区
//	int *p = new int(10);
//	return p;
//}
//
//int main()
//{
//	//在堆区开辟数据
//	int* p = func();
//	cout << *p << endl;  //可以一直打印出来 10
//	cout << *p << endl;
//
//	system("pause");
//	return 0;
//}