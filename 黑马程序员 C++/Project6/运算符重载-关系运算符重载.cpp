//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	//���صȺ������
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//bool test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Jiang", 16);
//
//	cout << "p1 �� p2 ����ȵ��� ";
//
//	if (p1 == p2)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	bool isSame = test01();
//	cout << boolalpha << isSame << endl;
//
//	system("pause");
//	return 0;
//}