//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int start_index = 0;
//	int end_index = sizeof(arr) / sizeof(arr[0]) - 1;
//	cout << "反转前：" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		cout << arr[j] << endl;
//	}
//
//	while (start_index < end_index)
//	{
//		int tmp = arr[start_index];
//		arr[start_index] = arr[end_index];
//		arr[end_index] = tmp;
//		start_index++;
//		end_index--;
//	}
//	cout << "反转后：" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		cout << arr[j] << endl;
//	}
//	return 0;
//}