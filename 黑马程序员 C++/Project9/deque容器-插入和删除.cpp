#include<iostream>
#include<string>
#include<deque>
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
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	cout << "\nβ��" << endl;
	d1.push_back(10);
	d1.push_back(20);
	printDeque(d1);

	cout << "\nͷ��" << endl;
	d1.push_front(10);
	d1.push_front(20);
	printDeque(d1);

	cout << "\nָ��λ�ò���1" << endl;
	d1.insert(d1.begin(), 1000);
	printDeque(d1);

	cout << "\nָ��λ�ò���2" << endl;
	d1.insert(d1.begin(), 4, 500);
	printDeque(d1);

	cout << "\n�������" << endl;
	d1.insert(d1.begin(),d1.begin(),d1.begin()+2);
	printDeque(d1);
	
	cout << "\nβɾ" << endl;
	d1.pop_back();
	printDeque(d1);

	cout << "\nͷɾ" << endl;
	d1.pop_front();
	printDeque(d1);	

	cout << "\nָ��λ��ɾ��" << endl;
	d1.erase(d1.begin(), d1.begin()+2);
	printDeque(d1);
}

int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}