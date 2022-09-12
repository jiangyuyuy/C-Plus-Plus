//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//
//class Solution {
//public:
//	int wiggleMaxLength(vector<int>&nums) {
//		if (nums.size() < 2) {
//			return nums.size();
//		}
//		static const int begin = 0;
//		static const int up = 1;
//		static const int down = 2;
//		int state = begin;
//		int max_length = 1;
//
//		for (int i = 1; i < nums.size(); i++) {
//			switch (state) {
//			case begin:
//				if (nums[i - 1] < nums[i]) {
//					state = up;
//					max_length++;
//				}
//				else if (nums[i - 1] > nums[i]) {
//					state = down;
//					max_length++;
//				}
//				break;
//			case up:
//				if (nums[i - 1] > nums[i]) {
//					state = down;
//					max_length++;
//				}
//				break;
//			case down:
//				if (nums[i - 1] < nums[i]) {
//					state = up;
//					max_length++;
//				}
//				break;
//			}
//		}
//		return max_length;
//	}
//};
//
//int main() {
//	Solution solve;
//	vector<int>nums;
//	int arr[] = { 1,17,5,10,13,15,10,5,16,8 };
//	for (int i = 0; i < 10; i++) {
//		nums.push_back(arr[i]);
//	}
//	cout << "ma_length: " << solve.wiggleMaxLength(nums) << endl;
//	system("pause");
//	return 0;
//}