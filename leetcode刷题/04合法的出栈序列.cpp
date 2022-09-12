//#include<iostream>
//#include<stack>
//#include<queue>
//using namespace std;
//
//bool check_is_vaild_order(std::queue<int>& order) {
//	std::stack<int> s;
//	int n = order.size();
//	for (int i = 1; i <= n; i++) {
//		s.push(i);
//		while (!s.empty() && order.front() == s.top()) {
//			s.pop();
//			order.pop();
//		}
//	}
//	if (!s.empty()) {
//		return false;
//	}
//	return true;
//}
//
//int main() {
//	int n;
//	int train;
//	cout << "ÇëÊäÈë n: ";
//	cin >> n;
//	while (n) {
//		std::queue<int> order;
//		cout << "ÇëÊäÈë train: " << endl;
//		for (int i = 1; i <= n; i++) {
//			cin >> train;
//			order.push(train);
//		}
//		cout << "order: " << order.size() << endl;
//		if (check_is_vaild_order(order)) {
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl;
//		}
//		cout << " --- ÇëÊäÈë n --- " << endl;
//		cin >> n;
//	}
//	system("pause");
//	return 0;
//}