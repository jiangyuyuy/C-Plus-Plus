//#include <iostream>
//#include <string>
//using namespace std;
//
////ofstream д����
//#include <fstream>
////
////����������
////ofstream ofs;
//// 
////���ļ�
////ofs.open("�ļ�·�������򿪷�ʽ);
////�򿪷�ʽ��ios::in Ϊ���ļ�����
////	       ios::out Ϊд�ļ�����
////		   ios::ate ��ʼλ�ã��ļ�ĩ
////		   ios::app ׷���ļ�д�ļ�
////		   ios::trunc ����ļ�������ɾ�����ڴ���
////		   ios::binary �����Ʒ�ʽ
//// 
//// �ö����Ʒ�ʽд�ļ���ios::binary | ios::out
//// 
//// д����
//// ofs << "д�������";
//// 
//// �ر��ļ�
//// ofs.close();
//
////ifstream ������
////fstream ��д����
//
//void test01()
//{
//	ifstream ifs;
//	ifs.open("files.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��!" << endl;
//		return;
//	}
//
//	//������
//	//��һ�ַ���
//	//char buf[1024] = { 0 };
//	//while ( ifs >> buf )
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ��ַ�ʽ
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�����ַ�ʽ
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