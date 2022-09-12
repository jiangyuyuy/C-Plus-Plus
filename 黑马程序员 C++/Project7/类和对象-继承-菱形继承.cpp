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
////利用虚继承，解决另行继承问题
////继承之前加上 virtual 关键字，变成虚继承
////Animal类称为虚基类
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