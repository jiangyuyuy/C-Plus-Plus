//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//1.默认构造容器
//	vector<int>v1;
//	for (int i = 0; i < 10; i++){
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//2.通过区间方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//3.n个elem方式构造
//	vector<int>v3(10, 100);  //100 100 100 100 100 100 100 100 100 100
//	printVector(v3);
//
//	//4.拷贝构造d
//	vector<int>v4(v3);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	system("cls");
//	return 0;
//}