//#include<iostream>
//#include<string>
//using namespace std;
//
////��Ԫ�Ĺؼ���Ϊ friend
////ȫ�ֺ������࣬��Ա���� ����������Ԫ
//
////������Ԫ
//class Building
//{
//	friend class GoodGay;
//
//public:
//	Building();
//
//public:
//	string m_SittingRoom;  //����
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
//class GoodGay
//{
//public:
//	GoodGay();  //���캯��
//	void Visit();
//	Building* building;
//
//};
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
//	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
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