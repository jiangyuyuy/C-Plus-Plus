//#include <iostream>
//#include <string>
//using namespace std;
//
////引用传递
//int& test01()
//{
//	static int a = 10;  //局部变量放在栈区,静态变量放在全局区
//	return a;
//}
//
//int main()
//{
//	int &ref = test01();
//	cout << "ref:" << ref << endl;  //10
//	cout << "ref:" << ref << endl;
//
//	test01() = 100;  //如果函数的引用作为返回值，这个函数调用可以作为左值
//	cout << "ref:" << ref << endl;  //100
//	cout << "ref:" << ref << endl;
//	
//	system("pause");
//	return 0;
//}