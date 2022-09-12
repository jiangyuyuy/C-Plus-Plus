//#include <iostream>
//#include <string>
//using namespace std;
//
////ofstream 写操作
//#include <fstream>
////
////创建流对象
////ofstream ofs;
//// 
////打开文件
////ofs.open("文件路径”，打开方式);
////打开方式：ios::in 为读文件而打开
////	       ios::out 为写文件而打开
////		   ios::ate 初始位置，文件末
////		   ios::app 追加文件写文件
////		   ios::trunc 如果文件存在先删除，在创建
////		   ios::binary 二进制方式
//// 
//// 用二进制方式写文件：ios::binary | ios::out
//// 
//// 写数据
//// ofs << "写入的数据";
//// 
//// 关闭文件
//// ofs.close();
//
////ifstream 读操作
////fstream 读写操作
//
//void test01()
//{
//	ifstream ifs;
//	ifs.open("files.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败!" << endl;
//		return;
//	}
//
//	//读数据
//	//第一种方法
//	//char buf[1024] = { 0 };
//	//while ( ifs >> buf )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第二种方式
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第三种方式
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}