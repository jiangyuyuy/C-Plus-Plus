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
//	cout << "�滻ǰ��" << endl;
//	for_each(v1.begin(), v1.end(), Myprint());
//	cout << endl;
//
//	//������5�����滻Ϊ100
//	replace_if(v1.begin(), v1.end(),Greater(), 3000);
//	cout << "�滻��" << endl;
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