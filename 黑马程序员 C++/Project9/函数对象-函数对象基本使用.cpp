#include<iostream>
#include<string>
using namespace std;

//1.����������ʹ��ʱ����������ͨ���������������в����������з���ֵ
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

void test01()
{
	MyAdd myAdd;
	int res = myAdd(1, 2);
	cout << "res: " << res << endl;
}

//2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;
};

void test02()
{
	MyPrint myPrint;
	myPrint("hello Mrs.jiang");
	myPrint("hello Mrs.jiang");
	myPrint("hello Mrs.jiang");

	cout << "MyPrint ���õĴ���Ϊ: " << myPrint.count << endl;
}

//3.�������������Ϊ��������
void doPrint(MyPrint& mp, string test)
{
	mp(test);
}

void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "hello C++");
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}