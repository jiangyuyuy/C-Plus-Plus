//#include <iostream>
//#include <string>
//using namespace std;
//
////在C++中，形参是由默认值的
////注意事项：
////1.如果某个位置有默认参数，则从这个位置起，从左到右都必须有默认参数
////2.函数声明和函数实现只能一个有默认参数
//
//int func(int a, int b = 10, int c = 20)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	int a = 10;
//	int res = func(a);  //40
//	int res1 = func(a, 15);  //45
//
//	cout << "res = " << res << endl;
//	cout << "res = " << res1 << endl;
//	system("pause");
//	return 0;
//}