//#include<iostream>
//#include<string>
//using namespace std;
//
////��Ԫ�Ĺؼ���Ϊ friend
////ȫ�ֺ������࣬��Ա���� ����������Ԫ
//
////��Ա���� ����Ԫ
//
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();  //���캯��
//	void Visit();  //�� visit ���Է��� building �е�˽�г�Ա
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
//	string m_SittingRoom;  //����
//
//private:
//	string m_BedRoom;  //����
//};
//
////����д��Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//
////����д��Ա����
//GoodGay::GoodGay()
//{
//	//����������
//	building = new Building;
//}
//
//void GoodGay::Visit()
//{
//	cout << "visit �������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "visit �������ڷ��ʣ�" << building->m_BedRoom << endl;
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