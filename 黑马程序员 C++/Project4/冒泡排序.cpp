//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
//	cout << "����ǰ��" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//�ܹ���������Ϊ��Ԫ�ظ��� - 1
//	for (int m = 0; m < 9 - 1; m++)
//	{
//		//�ڲ�ѭ���Աȣ����� = Ԫ�ظ��� - ��ǰ���� - 1
//		for (int j = 0; j < 9 - 1 - m; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	cout << "�����" << endl;
//	for (int i = 0; i < 9; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}