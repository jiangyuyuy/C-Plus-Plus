//#include<iostream>
//#include<string>
//using namespace std;
//
////友元的关键字为 friend
////全局函数，类，成员函数 都可以做友元
//
////成员函数 做友元
//
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();  //构造函数
//	void Visit();  //让 visit 可以访问 building 中的私有成员
//
//	Building * building;
//};
//
//class Building
//{
//	friend void GoodGay::Visit();
//public:
//	Building();
//
//public:
//	string m_SittingRoom;  //客厅
//
//private:
//	string m_BedRoom;  //卧室
//};
//
////类外写成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//
////类外写成员函数
//GoodGay::GoodGay()
//{
//	//创建建筑物
//	building = new Building;
//}
//
//void GoodGay::Visit()
//{
//	cout << "visit 函数正在访问：" << building->m_SittingRoom << endl;
//	cout << "visit 函数正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.Visit();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}