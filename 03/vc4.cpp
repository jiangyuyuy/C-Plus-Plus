#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a = 1.5;
	cout << "a: " << a << endl;
	short b = 32768;  
	//short 能表示的范围是：-32768~+32767
	cout << "b: " << b << endl;
	unsigned int c = -1;
	cout << "c: " << c << endl;
	/*
    a: 1
	b: -32768
	c: 4294967295
	q: 4
	*/

	int x = 0;
	x += 2;
	int q = ((x++), (++x));
	cout << "q: " << q << endl;
	/*
	逗号表达式在以后的编程中也会经常遇到，
	其规则是：所有以逗号间隔的表达式都进行计算，
	各个表达式的计算顺序按照从左往右。
	整个表达式的值是最后一个逗号表达式的值
	*/

	int x1 = 2;
	x1 = 3 * 5, x * 4;  //15
	cout << "x1: " << x1 << endl;
	system("pause");
	return 0;
}