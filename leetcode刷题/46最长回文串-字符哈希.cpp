//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//class Solution {
//public:
//	int longestPalindrome(string s) {
//		int char_map[128] = { 0 };  // 字符哈希
//		int max_length = 0;
//		int flag = 0;  // 是否有中心点
//		for (int i = 0; i < s.length(); i++) {
//			char_map[s[i]]++;
//		}
//		for (int i = 0; i < 128; i++) {
//			if (char_map[i] % 2 == 0) {
//				max_length += char_map[i];
//			}
//			else {
//				max_length += char_map[i] - 1;
//				flag = 1;
//			}
//		}
//		return max_length + flag;
//	}
//};
//
//int main() {
//	string s = "aaaccddssbbb";
//	Solution solve;
//	int count = solve.longestPalindrome(s);
//	cout << "Count: " << count << endl;
//	system("pause");
//	return 0;
//}