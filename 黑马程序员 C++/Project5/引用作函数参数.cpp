//#include <iostream>
//#include <string>
//using namespace std;
//
////值传递
//void mySwap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////地址传递
//void mySwap2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////引用传递
//void mySwap3(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	// mySwap1(a, b);  //值传递不能更换
//	// mySwap2(&a, &b);  //址传递可以更换
//	mySwap3(a, b);  //引用也可以更改
//	cout << "a:" << a << endl;
//	cout << "b:" << b << endl;
//	system("pause");
//	return 0;
//}