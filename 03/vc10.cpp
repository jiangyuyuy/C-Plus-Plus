//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	int a[4] = { 0 };
//	int& b = a[0];
//
//	cout << "b: " << b << endl;
//	b = 10;
//	cout << "b: " << b << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "a[" << i << "]:" << a[i] << "  ";
//	}
//	cout << endl;
//
//	int* p = new int[5];
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << *(p + i) << " ";
//	}
//	cout << endl;
//
//	delete[]p;
//	p = NULL;
//
//	system("pause");
//	return 0;
//}