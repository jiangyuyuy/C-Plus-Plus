#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a = 1.5;
	cout << "a: " << a << endl;
	short b = 32768;  
	//short �ܱ�ʾ�ķ�Χ�ǣ�-32768~+32767
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
	���ű��ʽ���Ժ�ı����Ҳ�ᾭ��������
	������ǣ������Զ��ż���ı��ʽ�����м��㣬
	�������ʽ�ļ���˳���մ������ҡ�
	�������ʽ��ֵ�����һ�����ű��ʽ��ֵ
	*/

	int x1 = 2;
	x1 = 3 * 5, x * 4;  //15
	cout << "x1: " << x1 << endl;
	system("pause");
	return 0;
}