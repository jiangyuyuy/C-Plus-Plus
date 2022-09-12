//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
//// 递归方法，会超时
//class Solution1 {
//public:
//	int climbStaris(int n) {
//		if (n == 1 || n == 2) {
//			return n;
//		}
//		return climbStaris(n - 1) + climbStaris(n - 2);
//	}
//};
//
//// 动态规划，不会超时
//class Solution2 {
//public:
//	int climbStairs(int n) {
//		vector<int>dp(n + 3, 0);
//		dp[1] = 1;
//		dp[2] = 2;
//		for (int i = 3; i <= n; i++) {
//			dp[i] = dp[i - 1] + dp[i - 2];
//		}
//		return dp[n];
//	}
//};
//
//int main() {
//	Solution1 solve1;
//	int StairsNum = 5;
//	int res1 = solve1.climbStaris(StairsNum);
//	cout << "res1: " << res1 << endl;
//	Solution2 solve2;
//	int res2 = solve2.climbStairs(StairsNum);
//	cout << "res2: " << res2 << endl;
//	system("pause");
//	return 0;
//}