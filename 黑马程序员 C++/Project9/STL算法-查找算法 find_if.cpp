#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

// ����������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	// �����Ƿ���Ԫ�ش��� 5
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end())
	{
		cout << "û���ҵ����� 5 ��Ԫ��" << endl;
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