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
//	//1.����ͷ�ļ�
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ�
//	ifs.open("files1.txt", ios::binary | ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4.���ļ�
//	Person p;
//	ifs.read((char*)&p, sizeof(Person));
//
//	cout << "������" << p.m_name << endl;
//	cout << "���䣺" << p.m_age << endl;
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}