//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//class Solution {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int index = -1;
//		int begin = 0;
//		int end = nums.size() - 1;
//		while (index == -1) {
//			int mid = (begin + end) / 2;
//			if (target == nums[mid]) {
//				index = mid;
//			}
//			else if (target < nums[mid]) {
//				if (mid == 0 || nums[mid-1] < target) {
//					index = mid;
//				}
//				end = mid - 1;
//			}
//			else if (target > nums[mid]) {
//				if (mid == nums.size() - 1 || target < nums[mid + 1]) {
//					index = mid + 1;
//				}
//				begin = mid + 1;
//			}
//		}
//		return index;
//	}
//};
//
//int main() {
//	vector<int>nums;
//	int test[] = { 1,3,5,7,9 };
//	Solution solve;
//	for (int j = 0; j < 5; j++) {
//		nums.push_back(test[j]);
//	}
//	for (int i = 0; i < 8; i++) {
//		cout << "i = " << i << ", index = " << solve.searchInsert(nums, i) << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}