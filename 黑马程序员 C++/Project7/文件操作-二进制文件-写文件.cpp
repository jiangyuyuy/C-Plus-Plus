//#include <iostream>
//#include <string>
//using namespace std;
//
////ofstream д����
//#include <fstream>
//// ����ԭ��
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
//	//1.����ͷ�ļ�
//	//2.����������
//	ofstream ofs("files1.txt", ios::binary | ios::out);
//
//	//3.���ļ�
//	// ofs.open("files1.txt", ios::binary | ios::out);
//
//	//4.д�ļ�
//	Person p = { "����", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}