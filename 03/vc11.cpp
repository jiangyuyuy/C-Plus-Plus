//#include<iostream>
//#include<string>
//using namespace std;
//
//// 用宏来实现一些相对简单的函数
///*
//调用的时候感觉 MAX_NUM 像个函数，
//但是他是个宏，宏跟函数的区别是，
//在编译阶段就将宏的代码展开直接替换调用宏的地方。
//所以省去了函数调用的压栈、出栈等开销。
//所以执行效率方面要比函数高。
//但是宏定义写起来比较难度倒是不大，
//就是麻烦一些，而且代码的可阅读性会变差。
//所以C++中引入了inline内联函数这么个东西，
//用inline关键字声明的函数，可以在调用的时候，
//将函数的代码直接嵌入到调用的地方，
//所以大大的减少了函数调用的开销，提高了效率
//*/
//
//#define MAX_NUM(x, y)(x > y ? x : y)
//
//class Person
//{
//public:
//	Person(string name, int age, int num) {
//		this->name = name;
//		this->num = num;
//		this->age = age;
//	}
//private:
//	char sex;
//	int max_num(int x, int y);
//public:
//	int get_max_num(int a, int b, int c);
//	void print_name();
//	string name;
//	int num;
//	int age;
//};
//
//int Person::max_num(int x, int y) {
//	return x > y ? x : y;
//}
//
//int Person::get_max_num(int a, int b, int c) {
//	int max_ab = max_num(a, b);
//	return max_ab > c ? max_ab : c;
//}
//
//void Person::print_name() {
//	cout << "name: " << this->name << endl;
//}
//
//int main()
//{
//	int ret = MAX_NUM(2, 3);
//	cout << "MAX_NUM: " << ret << endl;
//
//	Person p("Jiang", 20, 20);
//	int max_abc = p.get_max_num(2, 4, 1);
//	cout << "max_abc: " << max_abc << endl;
//	p.print_name();
//	system("pause");
//	return 0;
//}