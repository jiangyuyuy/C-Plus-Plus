//#include <iostream>
//#include <string>
//using namespace std;
//
////引用的本质：在C++内部实现是一个指针常量，一旦引用就不可更改
//void func(int& ref)
//{
//	ref = 100;  // *ref = 100
//}
//
//int main()
//{
//	int a = 10;
//	//自动转换为 int* const ref = &a; 指针常量是指针指向不能更改
//
//	int& ref = a;
//
//	ref = 20;  //内部发现ref是引用，会自动解引用 *ref = 20;
//
//	cout << "a:" << a << endl;  //20
//	cout << "ref:" << ref << endl;  //20
//	func(a);
//
//	system("pause");
//	return 0;
//}