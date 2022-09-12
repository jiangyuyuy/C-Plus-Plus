//#include<iostream>
//#include<string>
//#include<cctype> 
//using namespace std;
//
//int& Add(int a, int b) {
//	static int c = a + b;
//	return c;
//}
//
//int main() {
//	int& res = Add(1, 2);
//	Add(3, 4);
//	cout << "Res: \n" << res << "\n";
//
//	// 基于范围的 for 循环
//	int arr[] = { 1,2,3,4,5 };
//	for (int& x : arr) {
//		x *= 2;
//		cout << x << " ";
//	}
//	cout << endl;
//	for (auto & x : arr) {
//		x *= 2;
//		cout << x << " ";
//	}
//	cout << endl;
//
//	string str("Endeavor Jiang");
//	for (auto& c : str) {
//		c = tolower(c);
//	}
//	cout << "str: " << str << endl;
//
//	for (auto& c : str) {
//		c = toupper(c);
//	}
//	cout << "str: " << str << endl;
//
//	int q = 0;
//	while (q > 0) {
//		cout << q << " ";
//		q--;
//	}
//	cout << endl;
//
//	int p = 0;
//	do {
//		cout << p << " ";
//		p--;
//	} while (p > 0);
//	// do while 确保会至少执行一次循环
//	
//	return 0;
//}