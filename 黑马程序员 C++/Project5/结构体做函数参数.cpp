//#include <iostream>
//#include <string>
//using namespace std;
//
//// 定义结构体
//struct teacher
//{
//	int id;
//	string name;
//	int age;
//};
//
//void PrintT(struct teacher * t)  // 地址传递
//{
//	cout << "老师姓名：" << t->name << endl
//		<< " 老师年龄：" << t->age << endl
//		<< " 老师编号：" << t->id << endl;
//}
//int main()
//{
//	struct teacher t;
//	t.id = 2022;
//	t.name = "老王";
//	t.age = 50;
//	PrintT(&t);
//
//	t.id = 2021;
//	t.name = "小王";
//	t.age = 25;
//	cout << "老师姓名：" << t.name << endl
//		<< " 老师年龄：" << t.age << endl
//		<< " 老师编号：" << t.id << endl;
//	system("pause");
//	return 0;
//}