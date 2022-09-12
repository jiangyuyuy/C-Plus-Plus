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
	//添加种子
	srand((unsigned int)time(NULL));
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(23);
	v.push_back(11);
	v.push_back(0);
	v.push_back(25);

	//升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), PrintVec);
	cout << endl;
	
	//打乱
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), PrintVec);


}

int main()
{
	test01();
	system("pause");
	return 0;
}