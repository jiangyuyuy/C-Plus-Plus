//#include<iostream>
//using namespace std;
//
//class Box {
//public:
//	Box(){}
//	void setAge(int age);
//	int getAge();
//private:
//	int age;
//};
//
//void Box::setAge(int age) {
//	this->age = age;
//}
//
//int Box::getAge() {
//	return this->age;
//}
//
//class Box1 {
//public:
//	Box1(int height) {
//		this->height = height;
//	}
//	int getHeight();
//private:
//	int height;
//};
//
//int Box1::getHeight() {
//	return this->height;
//}
//
//int main() {
//	Box box;
//	Box *b_ = &box;
//	b_->setAge(10);
//	int age = box.getAge();
//	cout << "Age: " << age << endl;
//
//	Box1 box1(185);
//	Box1* b = &box1;
//	int height = b->getHeight();  // 指向C++类的指针
//	cout << "Height: " << height << "cm" << endl;
//
//	return 0;
//}