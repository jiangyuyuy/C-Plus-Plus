//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//class Solution {
//public:
//	bool canJump(vector<int>&nums) {
//		vector<int>index;  // ��Զ��������λ��
//		for (int i = 0; i < nums.size(); i++) {
//			index.push_back(nums[i] + i);
//		}
//		int jump = 0;
//		int max_index = index[0];
//		while (jump < nums.size() && jump <= max_index) {
//			if (max_index < index[jump]) {  // �����ǰ�������ĸ�Զ������� max_index
//				max_index = index[jump];
//				cout << "max_index: " << max_index << endl;
//			}
//			jump++;
//			cout << "jump: " << jump << endl;;
//			cout << "-----------" << endl;
//		}
//		if (jump >= index.size()) {
//			return true;
//		}
//		return false;
//	}
//
//	int jumpCount(vector<int>& nums) {
//		if (nums.size() < 2) {
//			return 0;  // ������鳤��С��2��������Ծ
//		}
//		int current_max_index = nums[0];  // ��ǰ�ɴﵽ����Զλ��
//		int pre_max_max_index = nums[0];  // ��������λ�ÿ��Դﵽ����Զλ��
//		int jump_min_count = 1;  // ��С��Ծ����
//		for (int i = 1; i < nums.size(); i++) {
//			if (i > current_max_index) {
//				jump_min_count++;
//				current_max_index = pre_max_max_index;
//			}
//			if (pre_max_max_index < nums[i] + i) {
//				pre_max_max_index = nums[i] + i;
//			}
//		}
//		return jump_min_count;
//	}
//};
//
//int main() {
//	Solution solve;
//	vector<int>nums;
//	nums.push_back(2);
//	nums.push_back(3);
//	nums.push_back(1);
//	nums.push_back(1);
//	nums.push_back(4);
//	if (solve.canJump(nums)) {
//		cout << "CanJump: True" << endl;
//	}
//	else {
//		cout << "CanJump: False" << endl;
//	}
//
//	Solution solve1;
//	vector<int>nums1;
//	nums1.push_back(2);
//	nums1.push_back(3);
//	nums1.push_back(1);
//	nums1.push_back(1);
//	nums1.push_back(4);
//	nums1.push_back(1);
//	cout << "jumpCount: " << solve1.jumpCount(nums1) << endl;
//
//	system("pause");
//	return 0;
//}