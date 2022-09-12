#include<iostream>
#include<algorithm>
#include<vector>
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
		v2.push_back(i + 10);
	}

	cout << "交换前： " << endl;
	cout << "v1: " << endl;
	for_each(v1.begin(), v1.end(), Myprint());
	cout << endl;
	cout << "v2: " << endl;
	for_each(v2.begin(), v2.end(), Myprint());

	swap(v1, v2);
	cout << endl;
	cout << "交换后： " << endl;
	cout << "v1: " << endl;
	for_each(v1.begin(), v1.end(), Myprint());
	cout << endl;
	cout << "v2: " << endl;
	for_each(v2.begin(), v2.end(), Myprint());
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}