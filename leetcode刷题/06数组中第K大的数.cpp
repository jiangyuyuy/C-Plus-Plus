//#include<queue>
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	int findKthLargest(std::vector<int>& nums, int k) {
//		std::priority_queue<int, std::vector<int>, std::greater<int>>less_heap;
//		for (int i = 0; i < nums.size(); i++) {
//			if (less_heap.size() < k) {
//				less_heap.push(nums[i]);
//			}
//			else if (nums[i] > less_heap.top()) {
//				less_heap.pop();
//				less_heap.push(nums[i]);
//			}
//		}
//		return less_heap.top();
//	}
//};
//
//int main() {
//	std::vector<int>nums;
//	int k = 4;
//	int arr[] = { 3,2,1,5,4,6 };
//	for (int i = 0; i < 6; i++) {
//		nums.push_back(arr[i]);
//	}
//	Solution solve;
//	cout << "res: " << solve.findKthLargest(nums, k) << endl;
//	system("pause");
//	return 0;
//}