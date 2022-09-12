#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	for_each(v1.begin(), v1.end(), Myprint());
	cout << endl;
	for_each(v2.begin(), v2.end(), Myprint());
	cout << endl;

	vector<int>t_v;
	t_v.resize(max(v1.size(),v2.size()));
	cout << "v1��v2�Ĳ��" << endl;
	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), t_v.begin());
	for_each(t_v.begin(), itEnd1, Myprint());
	cout << endl;

	cout << "v2��v1�Ĳ��" << endl;
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), t_v.begin());
	for_each(t_v.begin(), itEnd2, Myprint());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}