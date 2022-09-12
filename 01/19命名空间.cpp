//#include<iostream>
//using namespace std;
//
//namespace first_space {
//	int num = 10;;
//	void func() {
//		cout << "Inside first_space" << endl;
//		cout << "num: " << num << endl;
//	}
//}
//
//namespace second_space {
//	void func() {
//		cout << "Inside second_space" << endl;
//	}
//}
//
//using namespace second_space;
//
//// Ç¶Ì×µÄÃüÃû¿Õ¼ä
//namespace name1 {
//	int num = 10;
//	void func() {
//		cout << "Using name1 func()" << endl;
//	}
//	namespace name2 {
//		int num = 20;
//		void func() {
//			cout << "Using name1.name2 func()" << endl;
//		}
//	}
//}
//
//int main() {
//	first_space::func();
//	// second_space::func();
//	func();
//
//	name1::func();
//	name1::name2::func();
//	cout << "name1::num1: " << name1::num << endl;
//	cout << "name1::name2::num1: " << name1::name2::num << endl;
//	system("pause");
//	return 0;
//}