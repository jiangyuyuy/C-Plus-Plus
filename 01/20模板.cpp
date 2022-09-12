//#include<iostream>
//using namespace std;
//#include <vector>
//#include <cstdlib>
//#include <string>
//#include <stdexcept>
//
//// 函数模板
//template<typename T>
//T const& Max(T const& a, T const& b) {
//	return a > b ? a : b;
//}
//
//// 类模板
//template<class T>
//class Stack {
//public:
//	vector<T>elems;
//	void push(T const&);  // 入栈
//	void pop();  // 出栈
//	T top()const;  // 返回栈顶元素
//	bool empty()const {// 如果为空则返回真
//		return elems.empty();
//	}
//};
//
//template<class T>
//void Stack<T>::push(T const& elem) {
//	elems.push_back(elem);
//}
//
//template<class T>
//void Stack<T>::pop() {
//	if (elems.empty()) {
//		throw out_of_range("Stack<>::pop():empty stack");
//	}  // 抛出错误
//	elems.pop_back();
//}
//
//template<class T>
//T Stack<T>::top()const {
//	if (elems.empty()) {
//		throw out_of_range("Stack<>::top(): empty stack");
//	}
//	return elems.back();
//	// 返回最后一个元素的副本
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	cout << "Max(a,b): " << Max(a, b) << endl;
//	double a1 = 1.0;
//	double b1 = 2.0;
//	cout << "Max(a1,b1): " << Max(a1, b1) << endl;
//
//	try {
//		Stack<int>intStack;
//		Stack<string>stringStack;
//
//		intStack.push(7);
//		cout << "intStack.top(): " << intStack.top() << endl;
//
//		stringStack.push("Jiang");
//		cout << "stringStack.top(): " << stringStack.top() << endl;
//		stringStack.pop();
//		stringStack.pop();
//	}
//	catch (exception const& ex) {
//		cerr << "Exception: " << ex.what() << endl;
//		return -1;
//	}
//
//	system("pause");
//	return 0;
//}