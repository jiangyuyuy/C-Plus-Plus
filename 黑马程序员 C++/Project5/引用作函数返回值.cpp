//#include <iostream>
//#include <string>
//using namespace std;
//
////���ô���
//int& test01()
//{
//	static int a = 10;  //�ֲ���������ջ��,��̬��������ȫ����
//	return a;
//}
//
//int main()
//{
//	int &ref = test01();
//	cout << "ref:" << ref << endl;  //10
//	cout << "ref:" << ref << endl;
//
//	test01() = 100;  //���������������Ϊ����ֵ������������ÿ�����Ϊ��ֵ
//	cout << "ref:" << ref << endl;  //100
//	cout << "ref:" << ref << endl;
//	
//	system("pause");
//	return 0;
//}