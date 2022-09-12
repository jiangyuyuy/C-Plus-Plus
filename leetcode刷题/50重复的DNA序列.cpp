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
//	vector<string>findRepeatedDNASequences(string s) {
//		map<string, int>word_map;  // 单词，单词数量
//		vector<string>result;
//		for (int i = 0; i < s.length(); i++) {
//			string word = s.substr(i, 10);
//			if (word_map.find(word) != word_map.end()) {
//				word_map[word] += 1;
//			}
//			else {
//				word_map[word] = 1;
//			}
//		}
//		map<string, int>::iterator it;
//		for (it = word_map.begin(); it != word_map.end(); it++) {  // 遍历哈希表中的所有单词
//			if (it->second > 1) {
//				result.push_back(it->first);
//				cout << "it->first: " << it->first << endl;
//				cout << "it->second: " << it->second << endl;
//			}
//		}
//		return result;
//	}
//};
//
//int main() {
//	//string s = "AAAAACCCCCAAAAACCCCCAAAAADDDDD";
//	string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
//	Solution solve;
//	vector<string>result = solve.findRepeatedDNASequences(s);
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i].c_str() << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}