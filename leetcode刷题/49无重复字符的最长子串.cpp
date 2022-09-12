//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//
//class Solution {
//public:
//	int lengthOfLongestSubstring(string s) {
//		int begin = 0;
//		int result = 0;
//		string word = "";
//		int char_map[128] = { 0 };
//		for (int i = 0; i < s.length(); i++) {
//			char_map[s[i]]++;
//			if (char_map[s[i]] == 1) {
//				word.push_back(s[i]);
//				if (result < word.length()) {
//					result = word.length();
//				}
//			}
//			else {
//				while (begin < i && char_map[s[i]] > 1) {  
//					// d没有这个条件也可以 begin < i
//					char_map[s[i]]--;
//					begin++;
//				}
//				word = "";
//				for (int j = begin; j <= i; j++) {
//					word.push_back(s[j]);
//				}
//			}
//		}
//		return result;
//	}
//};
//
//int main() {
//	Solution solve;
//	string s = "abcbadab";
//	int res = solve.lengthOfLongestSubstring(s);
//	cout << "lengthOfLongestSubstring: " << res << endl;
//	system("pause");
//	return 0;
//}