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
//	int rob(vector<int>& nums) {
//		if (nums.size() == 0) {
//			return 0;
//		}
//		else if (nums.size() == 1) {
//			return nums[0];
//		}
//		vector<int>dp(nums.size(), 0);
//		dp[0] = nums[0];
//		dp[1] = max(nums[0], nums[1]);
//		for (int i = 2; i < nums.size(); i++) {
//			dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
//		}
//		return dp[nums.size() - 1];
//	}
//};
//
//int main() {
//	int test[] = { 5,2,6,3,1,7 };
//	vector<int>nums;
//	for (int i = 0; i < 6; i++) {
//		nums.push_back(test[i]);
//	}
//	Solution solve;
//	int res = solve.rob(nums);
//	cout << "Res: " << res << endl;
//	system("pause");
//	return 0;
//}