//#include <iostream>
//#include <string>
//using namespace std;
//
////1.new�Ļ����﷨
//int* func()
//{
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;  //*p ������
//	cout << *p << endl;
//	cout << *p << endl;
//	delete p;
//	// cout << *p << endl;  p�Ѿ����ͷ�
//}
//
////2.�ڶ�������һ������
//void test02()
//{
//	int* arr = new int[10];  //10����������ʮ��Ԫ��
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr[j] << endl;
//	}
//	delete[] arr;  //�����ͷ�Ҫ��������
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}