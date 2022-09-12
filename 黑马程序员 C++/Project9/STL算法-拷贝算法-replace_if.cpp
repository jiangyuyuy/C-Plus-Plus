//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//class Myprint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class Greater
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	cout << "替换前：" << endl;
//	for_each(v1.begin(), v1.end(), Myprint());
//	cout << endl;
//
//	//将大于5的数替换为100
//	replace_if(v1.begin(), v1.end(),Greater(), 3000);
//	cout << "替换后：" << endl;
//	for_each(v1.begin(), v1.end(), Myprint());
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}