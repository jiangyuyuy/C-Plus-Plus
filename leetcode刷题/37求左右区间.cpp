//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//int left_bound(vector<int>& nums, int target) {
//	int begin = 0;
//	int end = nums.size() - 1;
//	while (begin <= end) {
//		int mid = (begin + end) / 2;
//		if (target == nums[mid]) {
//			if (mid == 0 || target > nums[mid - 1]) {
//				return mid;
//			}
//			end = mid - 1;
//		}
//		else if (target < nums[mid]) {
//			end = mid - 1;
//		}
//		else if (target > nums[mid]) {
//			begin = mid + 1;
//		}
//	}
//	return -1;
//}
//
//int right_bound(vector<int>& nums, int target) {
//	int begin = 0;
//	int end = nums.size() - 1;
//	while (begin <= end) {
//		int mid = (begin + end) / 2;
//		if (target == nums[mid]) {
//			if (mid == nums.size() - 1 || nums[mid + 1] > target) {
//				return mid;
//			}
//			begin = mid + 1;
//		}
//		else if (target < nums[mid]) {
//			end = mid - 1;
//		}
//		else if (target > nums[mid]) {
//			begin = mid + 1;
//		}
//	}
//	return -1;
//}
//
//class Solution {
//public:
//	vector<int>searchRange(vector<int>& nums, int target) {
//		vector<int>result;
//		result.push_back(left_bound(nums, target));
//		result.push_back(right_bound(nums, target));
//		return result;
//	}
//};
//
//int main() {
//	int test[] = { 5,7,7,8,8,8,8,10 };
//	vector<int>nums;
//	for (int i = 0; i < sizeof(test) / sizeof(test[0]); i++) {
//		nums.push_back(test[i]);
//	}
//
//	Solution solve;
//	for (int i = 0; i < 12; i++) {
//		vector<int>result = solve.searchRange(nums, i);
//		cout << " " << i << ": [" << result[0] << ", " << result[1] << "]" << endl;
//		//printf(" %d: [%d, %d]\n", i, result[0], result[1]);
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}