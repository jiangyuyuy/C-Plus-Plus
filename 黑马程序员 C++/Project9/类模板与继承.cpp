#include <iostream>
#include <string>
using namespace std;

//��ģ����̳�
//1.������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//2.�����ָ�����������޷�����������ڴ�
//3.��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��

template<class T>
class Base
{
	T m;
};

class Son :public Base<int>
{

};

void test01()
{
	Son s1;
}

int main()
{
	test01();
	system("pause");
	system("cls");
}