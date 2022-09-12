//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
//class Solution {
//public:
//	bool makeSquare(vector<int>& nums) {
//		if (nums.size() < 4) {
//			return false;  // 火柴棒数量小于4返回假
//		}
//		int sum = 0;
//		for (int i = 0; i < nums.size(); i++) {
//			sum += nums[i];
//		}
//		if (sum % 4 != 0) {
//			return false;
//		}
//		sort(nums.rbegin(), nums.rend());  // 从大到小排序
//		int bucket[4] = { 0 };
//		return generate(0, nums, sum / 4, bucket);
//	}
//	bool generate(int i, vector<int>nums, int target, int bucket[]) {
//		if (i >= nums.size()) {  // 检查每个桶，如果都是 target ，则返回 true
//			return bucket[0] == target && bucket[1] == target 
//				&& bucket[2] == target && bucket[3] == target;
//		}
//		for (int j = 0; j < 4; j++) {
//			if (bucket[j] + nums[i] > target) {
//				continue;
//			}
//			bucket[j] += nums[i];  // 放在 j 桶中
//			if (generate(i + 1, nums, target, bucket)) {
//				return true;
//			}
//			bucket[j] -= nums[i];  // 回溯
//		}
//		return false;
//	}
//};
//
//void func() {
//	for (int i = 0; i < 5; i++) {
//		if (i == 2) {
//			continue;
//		}
//		cout << i << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	// func();
//	vector<int>nums;
//	nums.push_back(1);
//	nums.push_back(1);
//	nums.push_back(2);
//	nums.push_back(4);
//	nums.push_back(3);
//	nums.push_back(2);
//	nums.push_back(3);
//	Solution solve;
//	cout << "res: " << solve.makeSquare(nums) << endl;
//	system("pause");
//	return 0;
//}