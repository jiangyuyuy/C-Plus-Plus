//#include<queue>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//int main() {
//	std::priority_queue<int> big_heap_;  // 默认构造最大堆
//	std::priority_queue<int, std::vector<int>, 
//		std::greater<int>>small_heap;  // 最小堆构造
//	std::priority_queue<int, std::vector<int>, 
//		std::less<int>>big_heap;  // 构造最大堆
//	if (big_heap.empty()) {
//		cout << "big_heap is empty" << endl;
//	}
//	int test[] = { 6,10,1,7,99,4,33 };
//	for (int i = 0; i < 7; i++) {
//		big_heap.push(test[i]);
//	}
//	cout << "big_heap.top: " << big_heap.top() << endl;
//	big_heap.push(1000);
//	cout << "big_heap.top: " << big_heap.top() << endl;
//	for (int i = 0; i < 3; i++) {
//		big_heap.pop();
//	}
//	cout << "big_heap.top: " << big_heap.top() << endl;
//	cout << "big_heap.size(: " << big_heap.size() << endl;
//	system("pause");
//	return 0;
//}