#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
	char str[] = "I Love You";
	int (*p)(int a, int b) = NULL;  // 函数指针
	p = MAX;  // 用函数名给指针赋值
	p(1, 2);

	int (*pp)(int a, int b) = NULL;
	pp = MAX;
	(*pp)(1, 2);

	return 0;
}

int MAX(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a > b ? b : a;
}

void printData(int (*pp)(int, int), int a, int b)
{
	cout << pp(a, b) << endl;
}

void testFunctionPoint()
{
	void (*pD)(int (*)(int, int), int, int) = printData;
	pD(MAX, 1, 2);
	pD(Min, 1, 2);
}