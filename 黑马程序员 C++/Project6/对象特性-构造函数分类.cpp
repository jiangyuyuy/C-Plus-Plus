//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person()  //构造函数的创建
//	{
//		cout << "构造函数的调用..." << endl;
//	}
//
//	Person(int a)  //有参构造函数的创建
//	{
//		age = a;
//		cout << "有参构造函数的调用..." << endl;
//	}
//
//	Person(const Person& p)  //拷贝构造函数
//	{
//		age = p.age;
//		cout << "拷贝构造函数的调用..." << endl;
//		cout << "age:" << age << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	//1.括号法
//	Person p1;  //默认构造函数不用加括号
//	Person p2(10);
//	Person p3(p2);
//
//	//2.显示法
//	Person p4; 
//	Person p5 = Person(100);  //等号右侧 Person(100) 单独拿出来叫匿名对象，当这行执行完就被释放
//	Person p6 = Person(p5);
//
//	Person(1000);
//	cout << "匿名函数被释放了..." << endl;
//
//	//3.隐式转换法
//	Person p7 = 5; //相当于Person p7 = Person(5)
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}