//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal
//{
//public:
//	int m_age;
//};
//
////������̳У�������м̳�����
////�̳�֮ǰ���� virtual �ؼ��֣������̳�
////Animal���Ϊ�����
//class Sheep :virtual public Animal {};
//
//class Tuo :virtual public Animal {};
//
//class SheepTuo :public Sheep, public Tuo {};
//
//void test01()
//{
//	SheepTuo st;
//	st.Tuo::m_age = 20;
//	st.Sheep::m_age = 18;
//
//	cout << "st.Sheep::m_age: " << st.Sheep::m_age << endl;
//	cout << "st.Tuo::m_age: " << st.Tuo::m_age << endl;
//	cout << "st.m_age: " << st.m_age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}