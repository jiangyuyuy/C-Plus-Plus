//#include<iostream>
//#include<string>
//using namespace std;
//
//// 泛型编程利用的是主要技术是模板
//template<typename T>
//void Swap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void func() {
//	cout << "模板调用" << endl;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	cout << "a: " << a << ", b: " << b << endl;
//	Swap<int>(a, b);  //显示指定
//	cout << "a: " << a << ", b: " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	cout << "c: " << c << ", d: " << d << endl;
//	Swap(c, d);  //自动推导
//	cout << "c: " << c << ", d: " << d << endl;
//
//	func<int>();
//
//	system("pause");
//	return 0;
//}