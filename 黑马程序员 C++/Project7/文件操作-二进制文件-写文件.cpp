//#include <iostream>
//#include <string>
//using namespace std;
//
////ofstream 写操作
//#include <fstream>
//// 函数原型
//// ostream write(const shar * buffer, int len);
//
//class Person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//
//
//void test01()
//{
//	//1.包含头文件
//	//2.创建流对象
//	ofstream ofs("files1.txt", ios::binary | ios::out);
//
//	//3.打开文件
//	// ofs.open("files1.txt", ios::binary | ios::out);
//
//	//4.写文件
//	Person p = { "张三", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5.关闭文件
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}