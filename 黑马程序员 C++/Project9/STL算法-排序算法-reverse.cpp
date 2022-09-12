#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void PrintVec(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	// Ҫ�� v1 �� v2 ���������������ϳɺ�����������
	vector<int>Target_v;
	Target_v.resize(v1.size() + v2.size());

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), Target_v.begin());

	for_each(Target_v.begin(), Target_v.end(), PrintVec);
	cout << endl;

	reverse(Target_v.begin(), Target_v.end());
	for_each(Target_v.begin(), Target_v.end(), PrintVec);

	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}