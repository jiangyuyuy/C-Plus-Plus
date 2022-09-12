//#include <iostream>
//using namespace std;
//int main()
//{
//	/*
//	1.数据类型 数组名[行][列];
//	3.数据类型 数组名[行][列] = {数据1；数据2； 数据3； 数据4};  自动划分行列
//	4.数据类型 数组名[][列] = {数据1；数据2； 数据3； 数据4};
//	*/
//	int arr[2][3] = {};
//	arr[0][0] = 0;
//	arr[0][1] = 1;
//	arr[0][2] = 2;
//	arr[1][0] = 3;
//	arr[1][1] = 4;
//	arr[1][2] = 5;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << endl;
//		}
//	}
//
//	//2.数据类型 数组名[行][列] = { {数据1， 数据2}, {数据3， 数据4} }；
//	int arr1[2][3] = {
//		{1,2,3},
//		{4,5,6}
//	};
//
//	cout << "二维数组所占内存空间：" << sizeof(arr1) << endl;
//	cout << "二维数组第一行占用内存为：" << sizeof(arr1[0]) << endl;
//	cout << "二维数组每个元素占用内存为：" << sizeof(arr1[0][0]) << endl;
//	cout << "二维数组的行数为：" << sizeof(arr1) / sizeof(arr1[0]) << endl;
//	cout << "二维数组的列数为：" << sizeof(arr1[0]) / sizeof(arr[0][0]) << endl;
//
//	for (int i = 0; i < 2; i++)
//	{
//		//cout << (int)arr1[i] << endl;
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr1[i][j] << endl;
//			cout << (int)&arr1[i][j] << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}