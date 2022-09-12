//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	int age;
//	string name;
//};
//
//int main()
//{
//	vector<Person>v1;
//	Person p1("Jiang", 18);
//	v1.push_back(p1);
//	for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++) {
//		cout << "name: " << it->name << ", age: " << it->age << endl;
//		cout << "name: " << (*it).name << ", age: " << (*it).age << endl;
//	}
//
//	vector<Person*>v2;
//	Person p2("Yu", 20);
//	v2.push_back(&p2);
//	for (vector<Person*>::iterator it = v2.begin(); it != v2.end(); it++) {
//		cout << "name: " << (*it)->name << ", age: " << (*it)->age << endl;
//		cout << "name: " << (*(*it)).name << ", age: " << (*(*it)).age << endl;
//	}
//
//	system("pause");
//	return 0;
//}