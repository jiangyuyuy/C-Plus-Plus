#include<iostream>
using namespace std;

const int Max = 3;

// 指针作为函数参数
void changeA(int* ptr) {
	*ptr = 100;
}

// 函数返回指针
int* fun() {
	static int m = 10;
	return &m;
}

int main() {
	int arr[Max] = { 1,2,3 };
	int* p = arr;
	for (int i = 0; i < Max; i++) {
		printf("Address of arr[%d]: %d\n", i, p);
		printf("Value of arr[%d]: %d\n", i, *p);
		p++;
		// arr++;  错误的，指针和数组并不等价
	}

	// 指向指针的指针
	int var[3]={1,2,3};
	int* ptr;
	int** pptr;
	ptr = var;
	pptr = &ptr;
	for (int i = 0; i < 3; i++) {
		cout << "arr[" << i <<
			"]: " << *(*pptr + i) << endl;;
	}
	cout << *ptr << " " << *(* pptr + 1) << endl;
	cout << endl;

	// 指针作为函数参数
	int a = 1;
	cout << "a: " << a << endl;
	int* p1 = &a;
	changeA(p1);
	cout << "a: " << a << endl;

	int* m = fun();
	// 不要返回局部变量的地址
	cout << "m: " << *m << endl;
	return 0;
}