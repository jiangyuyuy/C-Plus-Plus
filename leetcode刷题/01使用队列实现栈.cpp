//#include <queue>
//#include<iostream>
//using namespace std;
//
//class MyStack
//{
//public:
//	MyStack() {
//	}
//	void push(int x) {
//		std::queue<int> temp_queue;
//		temp_queue.push(x);
//		while (!_data.empty()) {
//			temp_queue.push(_data.front());
//			_data.pop();
//		}
//		while (!temp_queue.empty()) {
//			_data.push(temp_queue.front());
//			temp_queue.pop();
//		}
//	}
//	int pop() {
//		int x = _data.front();
//		_data.pop();
//		return x;
//	}
//	int top() {
//		return _data.front();
//	}
//	bool empty() {
//		return _data.empty();
//	}
//private:
//	std::queue<int> _data;
//};
//
//
//int main()
//{
//	MyStack s;
//	for (int i = 1; i <= 4; i++) {
//		s.push(i);
//	}
//
//	cout << "s.top: " << s.top() << endl;
//	s.pop();
//	cout << "s.top: " << s.top() << endl;
//	s.push(5);
//	cout << "s.top: " << s.top() << endl;
//	system("pause");
//	return 0;
//}