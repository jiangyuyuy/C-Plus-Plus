//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	char ch = 'p';
//	char* p = &ch;
//	cout << "*p: " << *p << endl;
//
//	int a = 5;
//	int* p_a = &a;
//	cout << "*p_a: " << *p_a << endl;
//	*p_a = 10;
//	cout << "*p_a: " << *p_a << endl;
//	cout << "a: " << a << endl;
//
//	int num[5] = {0, 1, 2, 3, 4};
//	int count_num = sizeof(num) / sizeof(num[0]);
//	cout << "num[1] = " << num[1] << endl << endl;
//	for (int idx = 0; idx < count_num; idx++)
//	{
//		cout << "num["<< idx << "] = " <<
//			*(num + idx) << endl;
//	}
//
//	system("pause");
//	return 0;
//}