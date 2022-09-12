//#include <iostream>
//#include<stack>
//using namespace std;
//
//
//class MinStack {
//public:
//	MinStack() {
//	}
//	void push(int x) {
//		_data.push(x);
//		if (_min.empty()) {
//			_min.push(x);
//		}
//		else {
//			if (x > _min.top()) {
//				x = _min.top();
//			}
//			_min.push(x);
//		}
//	}
//	void pop() {
//		_data.pop();
//		_min.pop();
//	}
//	int top() {
//		return _data.top();
//	}
//	int getMin() {
//		return _min.top();
//	}
//private:
//	std::stack<int> _data;
//	std::stack<int> _min;
//};
//
//int main()
//{
//	MinStack minstack;
//	minstack.push(-2);
//	cout << "top = " << minstack.top() << endl;
//	cout << "min = " << minstack.getMin() << endl;
//	cout << "----------" << endl;
//	minstack.push(0);
//	cout << "top = " << minstack.top() << endl;
//	cout << "min = " << minstack.getMin() << endl;
//	cout << "----------" << endl;
//	minstack.push(-5);
//	cout << "top = " << minstack.top() << endl;
//	cout << "min = " << minstack.getMin() << endl;
//	cout << "----------" << endl;
//	minstack.pop();
//	cout << "top = " << minstack.top() << endl;
//	cout << "min = " << minstack.getMin() << endl;
//	cout << "----------" << endl;
//	system("pause");
//	return 0;
//}