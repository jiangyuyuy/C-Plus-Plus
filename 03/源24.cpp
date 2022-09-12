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
//	vector<vector<Person>>V;  // ÈÝÆ÷Ì×ÈÝÆ÷
//
//	Person p1_1("JIANG", 18);
//	Person p1_2("jiang", 8);
//	Person p2_1("YU", 20);
//	Person p2_2("yu", 2);
//
//	vector<Person>v1;
//	v1.push_back(p1_1);
//	v1.push_back(p1_2);
//	vector<Person>v2;
//	v2.push_back(p2_1);
//	v2.push_back(p2_2);
//
//	V.push_back(v1);
//	V.push_back(v2);
//
//	for (vector<vector<Person>>::iterator it = V.begin(); it != V.end(); it++) {
//		for (vector<Person>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//			cout << "name: " << vit->name << ", age: " << vit->age << endl;
//			//cout << "name: " << (*it).name << ", age: " << (*it).age << endl;
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}
//
