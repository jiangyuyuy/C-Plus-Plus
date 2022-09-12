//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
//class Solution1 {
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		if (nums.size() == 0) {
//			return 0;
//		}
//		vector<int>dp(nums.size(), 0);
//		dp[0] = 1;
//		int LIS = 1;
//		for (int i = 1; i < dp.size(); i++) {
//			dp[i] = 1;  // Ĭ��Ϊ 1
//			for (int j = 0; j < i; j++) {
//				if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
//					dp[i] = dp[j] + 1;
//				}
//			}
//			if (LIS < dp[i]) {
//				LIS = dp[i];
//			}
//		}
//		return LIS;
//	}
//};
//
///*
//����һ��ջ(vector)stack��stack[i]������Ϊ i+1 ���������������һ��Ԫ�ص�
//��С����ȡֵ������Ҫ��ɳ���Ϊ i+2 �����������У���Ҫһ������ stack[i]��Ԫ�أ�
//����ջ�Ĵ�С����Ϊ����������г���(����ջ�������е�Ԫ�ز�һ�����������)
//*/
//class Solution2 {  // ̰�ĵ�˼��
//public:
//	int lengthOfLIS(vector<int>& nums) {
//		if (nums.size() == 0) {
//			return 0;
//		}
//		vector<int>stack;
//		stack.push_back(nums[0]);
//		for (int i = 1; i < nums.size(); i++) {
//			if (nums[i] > stack.back()) {
//				stack.push_back(nums[i]);
//			}
//			else {
//				for (int j = 0; j < stack.size(); j++) {
//					if (nums[i] <= stack[j]) {
//						stack[j] = nums[i];
//						break;
//					}
//				}
//			}
//		}
//		return stack.size();
//	}
//};
//
//// ����3 ���ֲ���
//class Solution3 {
//public:
//	int binary_search(vector<int>nums, int target) {
//		int index = -1;
//		int begin = 0;
//		int end = nums.size() - 1;
//		while (index == -1) {
//			int mid = (end + begin) / 2;
//			if (target == nums[mid]) {
//				return mid;
//			}
//			else if (target < nums[mid]) {
//				if (mid == 0 || target > nums[mid - 1]) {
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
//	int lengthOfLIS(vector<int>& nums) {
//		if (nums.size() == 0) {
//			return 0;
//		}
//		vector<int>stack;
//		stack.push_back(nums[0]);
//		for (int i = 0; i < nums.size(); i++) {
//			if (nums[i] > stack.back()) {
//				stack.push_back(nums[i]);
//			}
//			else {
//				int pos = binary_search(stack, nums[i]);
//				stack[pos] = nums[i];
//			}
//		}
//		return stack.size();
//	}
//};
//
//int main() {
//	int test1[] = { 1,3,2,3,1,4 };
//	int test2[] = { 2,3,1,4,5,1 };
//	vector<int>nums;
//	for (int i = 0; i < 6; i++) {
//		nums.push_back(test1[i]);
//	}
//	Solution3 solve;
//	int res = solve.lengthOfLIS(nums);
//	cout << "Res: " << res;
//	cout << endl;
//	system("pause");
//	return 0;
//}