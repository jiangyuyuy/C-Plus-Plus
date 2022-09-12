//#include<iostream>
//#include<string>
//using namespace std;
//
////权限
////公共权限 public  成员类内可以访问，类外也可以访问
////保护权限 protected  类内可以访问，类外不可以访问  儿子可以访问父亲中的保护内容
////私有权限 private  类内可以访问，类外不可以访问  儿子不可以访问父亲中的保护内容
//
//class Student
//{
////公共权限
//public:
//	//属性
//	string m_name;
//
////保护权限
//protected:
//	string m_car;
//
////私有权限
//private:
//	int m_password;
//
//private:
//	void func()
//	{
//		m_name = "张三";
//		m_car = "拖拉机";
//		m_password = 123456;
//	}
//};
//
//int main()
//{
//	Student s1;
//
//	s1.m_name = "李四";
//	//s1.func(); 不可以访问
//	//s1.m_car = "奔驰"; 不可访问
//	system("pause");
//	return 0;
//}
//
