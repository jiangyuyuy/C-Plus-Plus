//#include<iostream>
//#include<string>
//using namespace std;
//
//class Print
//{
//public:
//	//重载函数调用运算符重载
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//class Add
//{
//public:
//	int operator()(int a, int b)
//	{
//		int ret = a + b;
//		return ret;
//	}
//};
//
//void MyPrint(string name)
//{
//	cout << name << endl;
//}
//
//void test01()
//{
//	Print myprint;
//	myprint("hello world");
//	MyPrint("hello world");
//}
//
//void test02()
//{
//	Add add;
//	int ret = add(10, 20);
//	cout << "a + b = " << ret << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}