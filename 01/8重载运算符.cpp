//#include<iostream>
//#include<string>
//using namespace std;
//
//class Box {
//public:
//	void setAge(int age) {
//		this->age = age;
//	}
//	void setName(string name) {
//		this->name = name;
//	}
//	int getAge() {
//		return this->age;
//	}
//	string getName() {
//		return this->name;
//	}
//	Box operator+(const Box& b) {
//		Box box;
//		box.age = this->age + b.age;
//		box.name = this->name + b.name;
//		return box;
//	}
//private:
//	int age;
//	string name;
//};
//
//int main() {
//	Box b1;
//	b1.setAge(18);
//	b1.setName("Jiang");
//	Box b2;
//	b2.setAge(6);
//	b2.setName("Yu");
//
//	Box b3;
//	b3 = b1 + b2;
//	cout << "b3.age: " << b3.getAge() << endl <<
//		"b3.name: " << b3.getName() << endl;
//	return 0;
//}