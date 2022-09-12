//#include<iostream>
//using namespace std;
//#include<string>
//
//class Box {
//public:
//	static int objectCount;
//	Box(string name) {
//		cout << "Constructor called." << endl;
//		this->name = name;
//		objectCount++;
//	}
//	string getName();
//private:
//	string name;
//};
//
//string Box::getName() {
//	return this->name;
//}
//
//int Box::objectCount = 0;  // 类内定义，类外初始化
//
//int main() {
//	Box box1("Jiang");
//	string name1 = box1.getName();
//	cout << "Name1: " << name1 << endl;
//	Box box2("Yu");
//	string name2 = box2.getName();
//	cout << "Name2: " << name2 << endl;
//	
//	int objectCount = Box::objectCount;
//	cout << "objectCount: " << objectCount << endl;
//	return 0;
//}
//
//
