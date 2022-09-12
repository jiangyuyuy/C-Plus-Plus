//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	void set_name(string name)
//	{
//		this->m_name = name;
//	}
//	void set_age(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			age = 0;
//			cout << "年龄设置无效！" << endl;
//			return;
//		}
//		this->m_age = age;
//	}
//	string get_name()
//	{
//		return this->m_name;
//	}
//	int get_age()
//	{
//		return this->m_age;
//	}
//private:
//	string m_name;
//	int m_age = 0;
//};
//
//int main()
//{
//	Person p1;
//	p1.set_age(90);
//	p1.set_name("jy");
//	int age = p1.get_age();
//	string name = p1.get_name();
//	cout << "age: " << age << ", name: " << name << endl;
//	system("pause");
//	return 0;
//}