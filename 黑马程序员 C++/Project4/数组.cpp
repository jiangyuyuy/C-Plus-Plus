//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	int arr1[5] = {};
//	int arr2[] = { 1,2,3,4,5 };
//	arr[0] = 0;
//	arr[1] = 1;
//	arr[2] = 2;
//	arr[3] = 3;
//	arr[4] = 4;
//	cout << "�����׵�ַΪ��" << (int)arr << endl;
//	cout << "�����һ��Ԫ�ص�ַ��" << (int)&arr[0] << endl;
//	cout << "����ڶ���Ԫ�ص�ַ��" << (int)&arr[1] << endl;
//	cout << "����������ռ�ڴ�Ϊ��" << sizeof(arr) << endl;
//	cout << "ÿ��Ԫ����ռ�ڴ�ռ䣺" << sizeof(arr[0]) << endl;
//	cout << "����Ԫ�ظ�����" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "arr[" << i << "]" << " = " << arr[i] << endl;
//		cout << "sizeof(arr[i]) = " << sizeof(arr[i]) << endl;
//		if (i == 4)
//		{
//			cout << "sizeof(arr) = " << sizeof(arr) << endl;
//		}
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		cout << "arr1[" << j << "]" << " = " << arr1[j] << endl;
//	}
//	for (int m = 0; m < 5; m++)
//	{
//		cout << "arr2[" << m << "]" << " = " << arr2[m] << endl;
//	}
//	
//	system("pause");
//	return 0;
//}