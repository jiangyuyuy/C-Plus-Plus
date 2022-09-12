//#include<iostream>
//using namespace std;
//
//class Shape {
//public:
//	/*Shape(int width = 0, int height = 0) {
//		this->height = height;
//		this->width = width;
//	}*/
//
//	// ´¿Ðéº¯Êý
//	// virtual int area() = 0;
//	virtual int area() {
//		cout << "Parent class area: " << endl;
//		return 0;
//	}
//	int width;
//	int height;
//};
//
//class Rectangle :public Shape {
//public:
//	/*Rectangle(int width = 0, int height = 0) 
//		:Shape(width, height) {}*/
//	int area() {
//		cout << "Rectangle class area: ";
//		return (height * width);
//	}
//};
//
//class Triangle :public Shape {
//public:
//	/*Triangle(int width = 0, int height = 0)
//		:Shape(width, height) {}*/
//	int area() {
//		cout << "Triangle class area: ";
//		return (height * width) / 2;
//	}
//};
//
//int main() {
//	/*Shape* shape;
//	Rectangle rect(10, 7);
//	Triangle tri(10, 7);
//	shape = &rect;
//	int rect_area = shape->area();
//	cout << "Rect Area: " << rect_area << endl;
//	shape = &tri;
//	int tri_area = shape->area();
//	cout << "Tri Area: " << tri_area << endl;*/
//
//
//	Shape* shape = new Rectangle;
//	shape->height = 10;
//	shape->width = 20;
//	Shape* shape1 = new Triangle;
//	shape1->height = 10;
//	shape1->width = 20;
//	int rect_area = shape->area();
//	cout << rect_area << endl;
//	int tri_area = shape1->area();
//	cout << tri_area;
//	return 0;
//}