//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////һԪν�ʣ��º������غ���Ϊ��������
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
//	//������������û�д���5��Ԫ��
//	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterFive());
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�����5�����֣�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5������Ϊ��" << *it << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}