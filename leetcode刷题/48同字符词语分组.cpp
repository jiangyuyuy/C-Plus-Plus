//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//
//class Solution1 {
//public:
//	vector<vector<string>>groupAnagrams(vector<string>& strs) {
//		map<string, vector<string>>anagram;
//		// 内部进行排序的各个单词为 key,以字符串向量（vector<string>）为value，储存各个字符数量相同的字符串(anangram）
//		vector<vector<string>>result;  // 储存最终的结果d
//		for (int i = 0; i < strs.size(); i++) {  // 遍历各个单词
//			string str = strs[i];
//			std::sort(str.begin(), str.end());  // 对 str 内部进行排序
//			if (anagram.find(str) == anagram.end()) {  // 无法在 hash 表中找到 str
//				std::vector<string>item;  // 设置一个空的字符串
//				anagram[str] = item;  // 以排序后的 strs[i] 作为 key
//			}
//			anagram[str].push_back(strs[i]);  // 在对应的字符串向量中 push 结果
//		}
//		map<string, vector<string>>::iterator it;  // it 表示的是指针，指向首地址
//		for (it = anagram.begin(); it != anagram.end(); it++) {
//			result.push_back((*it).second);
//		}
//		return result;
//	}
//};
//
//class Solution2 {
//public:
//	vector<vector<string>>groupAnagrams(vector<string>& strs) {
//		map<vector<int>, vector<string>>anagram;
//		// 内部进行排序的各个单词为 key,以字符串向量（vector<string>）为value，储存各个字符数量相同的字符串(anangram）
//		vector<vector<string>>result;  // 储存最终的结果d
//		for (int i = 0; i < strs.size(); i++) {  // 遍历各个单词
//			vector<int>vec;
//			change_str_vec(strs[i], vec);
//			if (anagram.find(vec) == anagram.end()) {  // 无法在 hash 表中找到 str
//				std::vector<string>item;  // 设置一个空的字符串
//				anagram[vec] = item;  // 以排序后的 strs[i] 作为 key
//			}
//			anagram[vec].push_back(strs[i]);  // 在对应的字符串向量中 push 结果
//		}
//		map<vector<int>, vector<string>>::iterator it;  // it 表示的是指针，指向首地址
//		for (it = anagram.begin(); it != anagram.end(); it++) {
//			result.push_back((*it).second);
//		}
//		return result;
//	}
//	void change_str_vec(string& str, vector<int>& vec) {
//		for (int i = 0; i < 26; i++) {
//			vec.push_back(0);
//		}
//		for (int i = 0; i < str.length(); i++) {
//			vec[str[i] - 'a']++;
//		}
//	}
//};
//
//int main() {
//	vector<string>strs;
//	strs.push_back("eat");
//	strs.push_back("tea");
//	strs.push_back("ate");
//	strs.push_back("tan");
//	strs.push_back("nta");
//	strs.push_back("jiang");
//	strs.push_back("angij");
//	Solution2 solve2;
//	vector<vector<string>>results = solve2.groupAnagrams(strs);
//	for (int i = 0; i < results.size(); i++) {
//		for (int j = 0; j < results[i].size(); j++) {
//			printf("[%s]", results[i][j].c_str());
//		}
//		cout << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}