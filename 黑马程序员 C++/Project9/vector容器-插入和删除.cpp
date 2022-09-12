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
1.push_back(elem);  β������Ԫ��
2.pop_back();  ɾ�����һ��Ԫ��
3.insert(const_iterator pos, elem);  ������ָ��λ�� pos ����Ԫ�ز���Ԫ�� elem
4.insert(const_iterator pos, int cout, elem);  ������ָ�� pos ���� num ��Ԫ�� elem
5.erase(const_iterator pos);  ɾ��������ָ���Ԫ��
6.erase(const_iterator start, const_iterator end);  ɾ���������� start �� end ֮���Ԫ��
7.clear();  ɾ�����������е�Ԫ�� 
*/
void test01()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	printVector(v1);

	v1.pop_back();
	printVector(v1);

	v1.insert(v1.begin(), 0);
	printVector(v1);

	v1.insert(v1.begin(), 5, 100);
	printVector(v1);

	v1.erase(v1.begin());
	printVector(v1);

	v1.erase(v1.begin(), v1.begin() + 4);
	printVector(v1);

	v1.clear();
	printVector(v1);

	/*
	10 20 30 40
	10 20 30
	0 10 20 30
	100 100 100 100 100 0 10 20 30
	100 100 100 100 0 10 20 30
	0 10 20 30

	*/
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}