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
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(23);

	//ÉýÐò
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), PrintVec);
	cout << endl;

	//½µÐò
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), PrintVec);
}

int main()
{
	test01();
	system("pause");
	return 0;
}