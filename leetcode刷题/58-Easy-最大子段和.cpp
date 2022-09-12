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
//	int maxSubArray(vector<int>& nums) {
//		vector<int>dp(nums.size(), 0);
//		dp[0] = nums[0];
//		int max_res = dp[0];
//		for (int i = 1; i < nums.size(); i++) {
//			dp[i] = max(dp[i - 1] + nums[i], nums[i]);
//			if (dp[i] > max_res) {
//				max_res = dp[i];
//			}
//		}
//		return max_res;
//	}
//};
//
//int main() {
//	int test[] = { -2,1,-3,4,-1,2,1,-5,4 };
//	vector<int>nums;
//	for (int i = 0; i < 9; i++) {
//		nums.push_back(test[i]);
//	}
//	Solution solve;
//	int res = solve.maxSubArray(nums);
//	cout << "Res: " << res << endl;
//	system("pause");
//	return 0;
//}