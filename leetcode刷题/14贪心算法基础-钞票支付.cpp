//#include<iostream>
//using namespace std;
//
//int main() {
//	const int RMB[] = { 200,100,20,10,5,1 };
//	const int NUM = 6;
//	int X = 628;
//	int count = 0;
//	for (int i = 0; i < NUM; i++) {
//		int use = X / RMB[i];
//		count += use;
//		X = X - RMB[i] * use;
//		cout << "需要面额为" << RMB[i] << "的钞票" << use << "张"
//			<< ", 剩余需要支付的金额为：" << X << endl;
//	}
//	cout << "总共需要：" << count << "张钞票." << endl;
//	system("pause");
//	return 0;
//}