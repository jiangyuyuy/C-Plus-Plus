//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Student
//{
//	int age;
//	string name;
//}s3;
//
//struct MultiStruct
//{
//	struct Student ms;
//	int stu;
//};
//
//int main()
//{
//	struct Student s1;  
//	//结构体创建的时候关键字可以省略
//	s1.name = "jiang";
//	s1.age = 100;
//	cout << "s1.name: " << s1.name << endl;
//
//	struct Student s2 = { 90,"Yu" };
//	cout << "s2.name: " << s2.name << endl;
//
//	s3.name = "Zhu";
//	s3.age = 85;
//	cout << "s3.name: " << s3.name << endl;
//
//	//结构体数组
//	Student arr[2] = { {80,"J"},{90,"Y"} };
//	cout << "arr[0].name: " << arr[0].name << endl;
//	cout << "arr[1].age: " << arr[1].age << endl;
//
//	//结构体指针
//	Student s4 = { 50,"Mu" };
//	Student* p = &s4;  //struct可以省略
//	cout << "p->name: " << p->name << endl;
//
//	//结构体嵌套
//
//	MultiStruct MS;
//	MS.stu = 100;
//	MS.ms.age = 90;
//	MS.ms.name = "J";
//	cout << "MS.stu: " << MS.stu
//		<< ", MS.stu.age: " <<
//		MS.ms.age << ", MS.ms.name: "
//		<< MS.ms.name << endl;
//
//
//	system("pause");
//	return 0;
//}