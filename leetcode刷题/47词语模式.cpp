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
//	bool wordPattern(string pattern, string str) {  // str 是用空格进行分割好的
//		map<string, char>word_map;  // 单词到 pattern 字符的映射
//		char used[128] = { 0 };  // 已被映射的 pattern 字符
//		string word;  // 临时保存拆分出的单词
//		int pos = 0;  // 当前指向的 pattern 字符
//		str.push_back(' ');  // 在末尾加一个空格
//		for (int i = 0; i < str.length(); i++) {
//			if (str[i] == ' ') {  // 遇到空格，拆分出一个新单词
//				if (pos == pattern.length()) {  // 若以分出一个单词，但是没有 pattern 字符对应
//					return false;
//				}
//				if (word_map.find(word) == word_map.end()) {  // 单词未出现在哈希映射中
//					if (used[pattern[pos]]) {  // 如果当前 pattern 字符已经使用了
//						return false;
//					}
//					word_map[word] = pattern[pos];
//					used[pattern[pos]] = 1;
//				}
//				else {
//					if (word_map[word] != pattern[pos]) {
//						return false;
//					}
//				}
//				word = "";  // 完成一个单词的插入与查询，清空 word
//				pos++;
//			}
//			else {
//				word += str[i];
//			}
//		}
//		if (pos != pattern.length()) {
//			return false;  // 有多余的 pattern 字符
//		}
//		return true;
//	}
//};
//
//int main() {
//	Solution solve;
//	string pattern = "abba";
//	string str = "-cat *dog *dog -cat";
//	if(solve.wordPattern(pattern, str))
//		cout << "IsWordPattern: True." << endl;
//	else
//		cout << "IsWordPattern: False." << endl;
//	system("pause");
//	return 0;
//}