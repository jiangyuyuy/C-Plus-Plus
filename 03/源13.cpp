//#include<iostream>
//#include<string>
//using namespace std;
//
//// this指针:解决名称冲突问题
//// this指针指向 被调用的成员函数 所属的对象
//// this指针本质是指针常量，指向不可以更改
//class Person
//{
//public:
//	Person(int age) { 
//		this->age = age; 
//	}
//	int age;
//
//	Person& PersonAddAge(Person& p) {
//		this->age += p.age;
//		return *this;
//	}
//};
//
//int main()
//{
//	Person p(10);
//	cout << "p.age: " << p.age << endl;
//
//	Person p1(20);
//	p1.PersonAddAge(p);
//	cout << "p1.age: " << p1.age << endl;
//	
//	Person p2(5);
//	p2.PersonAddAge(p).PersonAddAge(p).PersonAddAge(p);
//	cout << "p2.age: " << p2.age << endl;
//	system("pause");
//	return 0;
//}