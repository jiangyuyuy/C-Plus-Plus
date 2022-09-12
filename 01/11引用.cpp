//#include<iostream>
//using namespace std;
//
//void swapTwoNum(int& a, int& b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int vals[] = { 1,2,4,5 };
//
//int& setValue(int i) {
//	return vals[i];
//}
//
//
//int main() {
//	int a = 1;
//	int b = 2;
//	cout << "a: " << a << ", b: " << b << endl;
//	swapTwoNum(a, b);
//	cout << "a: " << a << ", b: " << b << endl;
//
//	for (int i = 0; i < sizeof(vals) / sizeof(vals[0]); i++) {
//		printf("vals[%d]: %d\n", i, vals[i]);
//	}
//	cout << endl;
//	setValue(2) = 10;
//	setValue(0) = 0;
//	for (int i = 0; i < sizeof(vals) / sizeof(vals[0]); i++) {
//		printf("vals[%d]: %d\n", i, vals[i]);
//	}
//	return 0;
//}