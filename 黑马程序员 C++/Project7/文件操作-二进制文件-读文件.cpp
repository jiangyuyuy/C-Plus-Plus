//#include <iostream>
//#include <string>
//using namespace std;
//
//#include <fstream>
//
//class Person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//
//void test01()
//{
//	//1.包含头文件
//	//2.创建流对象
//	ifstream ifs;
//
//	//3.打开文件
//	ifs.open("files1.txt", ios::binary | ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4.读文件
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//
//	cout << "姓名：" << p.m_name << endl;
//	cout << "年龄：" << p.m_age << endl;
//
//	//5.关闭文件
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}