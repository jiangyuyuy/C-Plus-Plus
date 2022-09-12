//#include<iostream>
//#include<string>
//using namespace std;
//
////友元的关键字为 friend
////全局函数，类，成员函数 都可以做友元
//
////全局函数做友元
//class Building
//{
//	//全局函数 goodGay() 是 Building 的好朋友，可以访问 Building 的私有成员
//	friend void goodGay(Building* building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;  //客厅
//private:
//	string m_BedRoom;  //卧室
//};
//
////全局函数
//void goodGay(Building* building)
//{
//	cout << "好基友 全局函数 正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友 全局函数 正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodGay(&building);  //传入地址
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}