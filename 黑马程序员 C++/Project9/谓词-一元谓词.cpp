//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////一元谓词，仿函数返回函数为布尔类型
//class greaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	v.erase(v.begin() + 6);
//
//	//查找容器中有没有大于5的元素
//	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterFive());
//	if (it == v.end())
//	{
//		cout << "未找到大于5的数字！" << endl;
//	}
//	else
//	{
//		cout << "找到了大于5的数字为：" << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}