//#include<iostream>
//using namespace std;
//#include<exception>
//
//double division(double a, double b) {
//	if (b == 0) {
//		throw "Division by zero condition!";
//	}
//	return a / b;
//}
//
//// 定义新的异常
//struct MyException :public exception {
//	const char* what() {
//		return "C++ Exception";
//	}
//};
//
//int main() {
//	/*double a= 10.0;
//	double b = 0.0;
//	double z = 0;
//	try {
//		z = division(a, b);
//		cout << "res: " << z << endl;
//	}
//	catch (const char* msg) {
//		cerr << msg << endl;
//	}*/
//	try {
//		throw MyException();
//	}
//	catch (MyException& e) {
//		cout << "MyException caught" << endl;
//		cout << e.what() << endl;
//	}
//	catch (exception& e) {
//		//其他的错误
//	}
//
//	return 0;
//}