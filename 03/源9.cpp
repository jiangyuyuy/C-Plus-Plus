//#include<iostream>
//#include<string>
//using namespace std;
//
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		m_pName = pName;
//		cout << "Phone构造函数" << endl;
//	}
//	string m_pName;
//	~Phone(){cout << "Phone析构函数" << endl;}
//};
//
//class Person
//{
//public:
//	Person(string name, string pName) :m_Name(name), m_pName(pName) 
//	{ cout << "Pereon构造函数" << endl; }
//	string m_Name;
//	Phone m_pName;
//	~Person() { cout << "Person析构函数" << endl; }
//};
//
//int main()
//{
//	Person p("LiMing", "iPhone13");
//	cout << p.m_Name << " 拿着 " << p.m_pName.m_pName << endl;
//	// system("pause");
//	return 0;
//}