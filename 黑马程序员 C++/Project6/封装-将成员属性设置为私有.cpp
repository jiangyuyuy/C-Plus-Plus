//#include<iostream>
//#include<string>
//using namespace std;
//
////将成员属性设置为私有，可以控制读写权限
////对于写权限，我们可以检测数据的有效性
//
//class Person
//{
//private:
//	string m_name;
//	int m_age; 
//	string m_lover;
//
//public:
//	void setName(string name)
//	{
//		m_name = name;
//	}
//
//	string getName()
//	{
//		return m_name;
//	}
//
//	void setAge(int age)
//	{
//		if (age < 0 || age > 130)
//		{
//			m_age = 0;
//			cout << "你个老妖精！" << endl;
//			return;
//		}
//		m_age = age;
//	}
//
//	int getAge()
//	{
//		return m_age;
//	}
//	
//	string setLover(string name)
//	{
//		m_lover = name;
//		return m_lover;
//	}
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//	string getname = p.getName();
//	cout << "p.name:" << getname << endl;
//
//	p.setAge(18);
//	cout << "p.age:" << p.getAge() << endl;
//
//	string lover_name = p.setLover("小花");
//	cout << "p.lover:" << lover_name << endl;
//
//	system("pause");
//	return 0;
//}
//
