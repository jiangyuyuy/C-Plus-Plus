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
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	//���ֲ���Ҫ���������У��������п��ܲ���ʧ��
	bool it = binary_search(v.begin(), v.end(), 2);
	if (it)
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ�Ԫ�أ�" << endl;
	}
}



int main()
{
	test01();
	system("pause");
	return 0;
}