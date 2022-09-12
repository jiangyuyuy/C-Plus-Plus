//#include <iostream>
//#include<stack>
//using namespace std;
//
//class MyQueue {
//public:
//	MyQueue() {
//	}
//	void push(int x) {
//		std::stack<int> temp_stack;
//		while (!_data.empty()) {
//			temp_stack.push(_data.top());
//			_data.pop();
//		}
//		temp_stack.push(x);
//		while (!temp_stack.empty()) {
//			_data.push(temp_stack.top());
//			temp_stack.pop();
//		}
//	}
//	
//	int pop() {
//		int x = _data.top();
//		_data.pop();
//		return x;
//	}
//	int peek() {
//		return _data.top();
//	}
//	int empty()
//	{
//		return _data.empty();
//	}
//private:
//	std::stack<int> _data;
//};
//
//int main()
//{
//	MyQueue q;
//	for (int i = 1; i <= 4; i++) {
//		q.push(i);
//	}
//
//	cout << "s.peek: " << q.peek() << endl;
//	q.pop();
//	cout << "s.peek: " << q.peek() << endl;
//	system("pause");
//	return 0;
//}