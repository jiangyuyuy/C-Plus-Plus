#include<iostream>
#include<string>
#include<deque>
#include<algorithm>
using namespace std;

//deque���캯��
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		// *it = 10;  �������޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	cout << "����ǰ" << endl;
	deque<int>d1;
	d1.push_back(2);
	d1.push_back(5);
	d1.push_back(3);
	d1.push_back(1);
	d1.push_back(10);
	d1.push_back(6);
	d1.push_back(7);
	printDeque(d1);

	// ֧��������ʵĵ�����������������ʹ�� sort ������������ (vector, deque)
	cout << "�����" << endl;
	sort(d1.begin(),d1.end());
	printDeque(d1);

}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}