#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// ����������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// �����Ƿ���Ԫ�� 5
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ�Ԫ�� 5" << endl;
	}
	else
	{
		cout << "�ҵ���" << *it << endl;
	}
}



int main()
{
	test01();
	system("pause");
	return 0;
}