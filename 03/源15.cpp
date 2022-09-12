//#include<iostream>
//#include<string>
//using namespace std;
//
//class Building
//{
//	//friend void GoodGay2::visit1();
//	friend class GoodGay2;
//	friend void GoodGay(Building* building);
//	friend class GoodGay1;
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//void GoodGay(Building* building)  //函数做友元
//{
//	cout << "访问 SittingRoom: " << building->m_SittingRoom << endl;
//	cout << "访问 BedRoom: " << building->m_BedRoom << endl;
//}
//
////---------------------------------
//class GoodGay1  //类做友元
//{
//public:
//	GoodGay1(){
//		building = new Building;
//	}
//	void visit();
//	Building* building;
//};
//void GoodGay1::visit(){
//	cout << "访问 SittingRoom: " << building->m_SittingRoom << endl;
//	cout << "访问 BedRoom: " << building->m_BedRoom << endl;
//}
//
//// ------------------------------
//class GoodGay2
//{
//public:
//	GoodGay2();
//	void visit2();
//	void visit1();
//	Building* building2;
//};
//GoodGay2::GoodGay2(){
//	building2 = new Building;
//}
//
//void GoodGay2::visit2() {
//	cout << "访问 SittingRoom: " << building2->m_SittingRoom << endl;
//	cout << "访问 BedRoom: " << building2->m_BedRoom << endl;
//}
//void GoodGay2::visit1() {
//	cout << "访问 SittingRoom: " << building2->m_SittingRoom << endl;
//	cout << "访问 BedRoom: " << building2->m_BedRoom << endl;
//}
//
////---------------------------------
//
//int main()
//{
//	Building building;
//	GoodGay(&building);
//
//	cout << "------------------" << endl;
//	GoodGay1 goodGay1;
//	goodGay1.visit();
//	cout << "------------------" << endl;
//
//	GoodGay2 gg;
//	gg.visit1();
//	gg.visit2();
//
//	system("pause");
//	return 0;
//}