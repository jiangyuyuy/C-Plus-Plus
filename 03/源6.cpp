//#include<iostream>
//#include<string>
//using namespace std;
//
//class C1
//{
//	int age = 90; //类默认权限为私有权限
//};
//
//struct C2
//{
//	int age = 90;  //结构体默认为公共权限
//};
//
//class Person
//{
//public:  // 成员类内和类外都可以访问
//	string m_name;
//private:  //保护权限，成员类内可以访问，类外不可以访问，儿子不可以访问父亲中的保护内容
//	string m_car;
//protected:  //私有权限，成员类内可以访问，类外不可以访问，儿子可以访问父亲中的保护内容
//	int m_password;
//
//public:
//	void func()
//	{
//		m_name = "张三";
//		m_car = "奔驰";
//		m_password = 123;
//	}
//};
//
//int main()
//{
//	Person p;
//	p.func();  //赋值
//	cout << "name: " << p.m_name << endl;
//	// cout << p.m_car << endl;  内外不可以访问
//	// cout << p.password << endl;  内外不可以访问
//
//	C1 c1;
//	//c1.age;  内外不可以访问
//	C2 c2;
//	cout << c2.age << endl;  //内外可以访问
//	system("pause");
//	return 0;
//}