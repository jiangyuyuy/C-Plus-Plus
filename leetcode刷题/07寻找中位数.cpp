//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//class MedianFinder {
//public:
//	MedianFinder() {
//	}
// 
//	void addNum(int num) {
//		if (big_queue.empty()) {
//			big_queue.push(num);
//			return;
//		}
// 
//		if (big_queue.size() == small_queue.size()) {
//			if (num < big_queue.top()) {
//				big_queue.push(num);
//			}
//			else {
//				small_queue.push(num);
//			}
//		}
// 
//		else if (big_queue.size() > small_queue.size()) {
//			if (num > big_queue.top()) {
//				small_queue.push(num);
//			}
//			else {
//				small_queue.push(big_queue.top());
//				big_queue.pop();
//				big_queue.push(num);
//			}
//		}
// 
//		else if (big_queue.size() < small_queue.size()) {
//			if (num < small_queue.top()) {
//				big_queue.push(num);
//			}
//			else {
//				big_queue.push(small_queue.top());
//				small_queue.pop();
//				small_queue.push(num);
//			}
//		}
//	}
// 
//	double findMedian() {
//		if (big_queue.size() == small_queue.size()) {
//			return (big_queue.top() + small_queue.top()) / 2;
//		}
//		else if(big_queue.size() > small_queue.size()) {
//			return big_queue.top();
//		}
//		else {
//			return small_queue.top();
//		}
//	}
// 
//	std::priority_queue<double, std::vector<double>,
//		std::greater<double>>small_queue;  // 最小堆构造
//	std::priority_queue<double, std::vector<double>,
//		std::less<double>>big_queue;  // 构造最大堆
//};
//
//int main() {
//	MedianFinder M;
//	int test[] = { 6,10,1,7,99,4,33 };
//	//int test[] = {1, 2, 3, 4, 5, 6, 7};
//	for (int i = 0; i < 7; i++) {
//		M.addNum(test[i]);
//		cout << "Median: " << M.findMedian() << endl;
//	}
//	system("pause");
//	return 0;
//}