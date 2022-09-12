//#include<iostream>
//using namespace std;
//
//class Box {
//public:
//	Box() {
//		cout << "调用构造函数" << endl;
//	}
//	~Box() {
//		cout << "调用析构函数" << endl;
//	}
//
//};
//
//int main() {
//	double* pvalue = NULL;  // 初始化为NULL的指针
//	pvalue = new double;  // 为变量请求内存
//
//	*pvalue = 20.0;  // 在分配的地址处储存值
//	cout << "Value of pvalue: " << *pvalue << endl;
//	delete pvalue;  // 释放内存
//
//	// 数组动态内存分配
//	int* arr = NULL;
//	// 一维数组
//	arr = new int[5];
//	for (int i = 0; i < 3; i++) {
//		*(arr + i) = i;
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("[%d]\n", *(arr + i));
//	}
//	delete[] arr;
//
//	// 二维数组 m X n
//	int m = 2;
//	int n = 3;
//	int** arr2;
//	arr2 = new int* [m];
//	for (int i = 0; i < m; i++) {
//		arr2[i] = new int[n];
//		// arr2[i]代表二维数组第一行一维数组的首地址
//		for (int j = 0; j < n; j++) {
//			*(arr2[i] + j) = i + j;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("[%d] ", *(arr2[i] + j));
//		}
//		cout << endl;
//	}
//	// 释放
//	for (int i = 0; i < m; i++) {
//		delete[]arr2[i];
//	}
//	delete[]arr2;
//
//	// 对象的动态内存分配
//	Box* myBox = new Box[4];
//	delete[]myBox;
//
//	cout << endl;
//	return 0;
//}