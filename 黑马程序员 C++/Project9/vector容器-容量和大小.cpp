#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

/*
1.empty();  �ж��������Ƿ�Ϊ��
2.capacity();  ����������
3.size();  ����������Ԫ�صĸ���
4.resize(int num);  ����ָ����������Ϊ num���������䳤������Ĭ��ֵ���
					��������̣���ɾ���������ȵ�Ԫ��
5.resize(int num, elem);  ����ָ����������Ϊ num���������䳤������elem�����λ��
						  ��������̣���ɾ���������ȵ�Ԫ��
*/
void test01()
{
	//1.Ĭ�Ϲ�������
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15);
	printVector(v1);
	cout << "v1���µĴ�С1Ϊ��" << v1.size() << endl;

	v1.resize(20, 'yu');
	printVector(v1);
	cout << "v1���µĴ�С2Ϊ��" << v1.size() << endl;

	v1.resize(10);
	printVector(v1);
	cout << "v1���µĴ�С3Ϊ��" << v1.size() << endl;

	/*
	0 1 2 3 4 5 6 7 8 9
	v1��Ϊ��
	v1������Ϊ��13
	v1�Ĵ�СΪ��10
	0 1 2 3 4 5 6 7 8 9 0 0 0 0 0
	v1���µĴ�С1Ϊ��15
	0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 31093 31093 31093 31093 31093
	v1���µĴ�С2Ϊ��20
	0 1 2 3 4 5 6 7 8 9
	v1���µĴ�С3Ϊ��10
	*/
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}