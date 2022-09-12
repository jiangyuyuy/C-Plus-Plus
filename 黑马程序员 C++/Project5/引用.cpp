//#include <iostream>
//#include <string>
//using namespace std;
//
////引用：给变量起别名
////引用注意事项：需要初始化，初始化之后就不能更改(int &b = c; 这是错误的)
//
//int a = 10;
//int& b = a;
//
//int main()
//{
//	cout << "a: " << a << endl;  //10
//	cout << "b: " << b << endl;  //10
//	a = 20;
//	cout << "a: " << a << endl;  //20
//	cout << "b: " << b << endl;  //20
//
//	int c = 30;
//	b = c;  //赋值操作，并不是引用
//	cout << "a: " << a << endl;  //30
//	cout << "b: " << b << endl;  //30
//	cout << "c: " << c << endl;  //30
//	system("pause");
//	return 0;
//}