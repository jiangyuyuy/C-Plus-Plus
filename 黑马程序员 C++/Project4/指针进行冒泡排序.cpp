//#include <iostream>
//using namespace std;
//
//void BubbleSort(int * arr, int len)  // 参数1：数组首地址；参数2：数组长度
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void PrintArr(int * arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main()
//{
//	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, len); // 地址传递可以修饰实参
//	PrintArr(arr, len);
//	system("pause");
//	return 0;
//}