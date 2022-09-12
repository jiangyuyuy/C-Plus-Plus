//#include<iostream>
//#include<string>
//using namespace std;
//
//struct Student
//{
//	string name;
//	int age;
//};
//
//int main()
//{
//	Student stu[2];
//	for (int idx = 0; idx < 2; idx++)
//	{
//		cout << "ÇëÊäÈë stu[" << idx << "].name: ";
//		cin >> stu[idx].name;
//		cout << "ÇëÊäÈë stu[" << idx << "].age: ";
//		cin >> stu[idx].age;
//	}
//
//	for (int idx = 0; idx < 2; idx++)
//	{
//		cout << "stu[" << idx << "].name: " <<
//			stu[idx].name << endl;
//		cout << "stu[" << idx << "].age: " <<
//			stu[idx].age << endl;
//	}
//
//	Student stu1;
//	Student* ps = &stu1;
//	(*ps).name = "Jiang";
//	(*ps).age = 20;
//	cout << "stu1.name: " << stu1.name << endl;
//	cout << "stu1.age: " << stu1.age << endl;
//
//	Student stu11;
//	Student* ps1 = &stu11;
//	ps1->name = "Yu";
//	ps1->age = 25;
//	cout << "stu11.name: " << stu11.name << endl;
//	cout << "stu11.age: " << stu11.age << endl;
//
//	system("pause");
//	return 0;
//}