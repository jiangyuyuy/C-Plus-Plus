//#include <iostream>
//using namespace std;
//int main()
//{
//	// 添加随机数种子，利用系统当前时间生成随机数，防止每次随机数都一样
//	srand((unsigned int)time(NULL));
//
//	int num = rand() % 100 + 1;  // rand生成0-99的随机数
//	cout << "请输入一个数字： " << endl;
//	// cout << num << endl;
//
//	int val = 0;
//
//	while (1)
//	{
//		cin >> val;
//			if (val > num)
//			{
//				cout << "猜大了" << endl;
//			}
//			else if (val < num)
//			{
//				cout << "猜小了" << endl;
//			}
//			else
//			{
//				cout << "恭喜您猜对了" << endl;
//				break;
//			}
//	}
//	system("pause");
//	return 0;
//}