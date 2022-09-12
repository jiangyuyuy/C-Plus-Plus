//#include<iostream>
//using namespace std;
//
//class Box {
//public:
//	double getVolume() {
//		return length * height * breadth;
//	}
//private:
//	double height;
//	double breadth;
//	double length;
//};
//
//class Adder {
//public:
//	Adder(int total = 0) {
//		this->total = total;
//	}
//	// 对外接口
//	void addNum(int number) {
//		this->total += number;
//	}
//	// 对外接口
//	int getTotal() {
//		return this->total;
//	}
//private:
//	int total;
//};
//
//int main() {
//	Adder a;
//	int res1 = a.getTotal();
//	cout << "Total: " << res1 << endl;
//	a.addNum(10);
//	int res2 = a.getTotal();
//	cout << "Tota2: " << res2 << endl;
//	a.addNum(20);
//	int res3 = a.getTotal();
//	cout << "Tota3: " << res3 << endl;
//	return 0;
//}