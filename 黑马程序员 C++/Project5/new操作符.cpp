//#include <iostream>
//#include <string>
//using namespace std;
//
////1.new的基本语法
//int* func()
//{
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;  //*p 解引用
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	// cout << *p << endl;  p已经被释放
//}
//
////2.在堆区开辟一个数组
//void test02()
//{
//	int* arr = new int[10];  //10代表数组有十个元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << endl;
//	}
//	delete[] arr;  //数组释放要加中括号
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}