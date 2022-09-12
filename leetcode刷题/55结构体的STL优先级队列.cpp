//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
//struct Qitem {
//	int x;
//	int y;
//	int h;
//	Qitem(int x, int y, int h) :x(x), y(y), h(h) {
//	}
//};
//
//struct cmp {
//	bool operator()(const Qitem& a, const Qitem& b) {
//		return a.h > b.h;
//	}
//};
//
//int main() {
//	std::priority_queue<Qitem, std::vector<Qitem>, cmp> Q;
//	// 优先级队列
//	Q.push(Qitem(0, 0, 5));
//	Q.push(Qitem(1, 3, 2));
//	Q.push(Qitem(5, 2, 4));
//	Q.push(Qitem(0, 1, 8));
//	Q.push(Qitem(6, 7, 1));
//	/*
//	x:6 y:7 h:1
//	x:1 y:3 h:2
//	x:5 y:2 h:4
//	x:0 y:0 h:5
//	x:0 y:1 h:8
//	请按任意键继续. . .
//	*/
//	while (!Q.empty()) {
//		int x = Q.top().x;
//		int y = Q.top().y;
//		int h = Q.top().h;
//		cout << "x:" << x << " ";
//		cout << "y:" << y << " ";
//		cout << "h:" << h << " ";
//		Q.pop();
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}