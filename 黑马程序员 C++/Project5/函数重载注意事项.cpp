//#include <iostream>
//#include <string>
//using namespace std;
//
////函数重载注意事项
////1.引用作为重载
////2.函数重载碰到默认参数
//
//void func(int& a)
//{
//	cout << "This is a func." << endl;
//}
//
//void func(const int& a)
//{
//	cout << "This is a const func." << endl;
//}
//
//int main()
//{
//	int a = 10;
//	func(a);  //This is a func.
//	func(20);  //This is a const func.
//
//	system("pause");
//	return 0;
//}