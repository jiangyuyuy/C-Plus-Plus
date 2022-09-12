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
//	bool wordPattern(string pattern, string str) {  // str ���ÿո���зָ�õ�
//		map<string, char>word_map;  // ���ʵ� pattern �ַ���ӳ��
//		char used[128] = { 0 };  // �ѱ�ӳ��� pattern �ַ�
//		string word;  // ��ʱ�����ֳ��ĵ���
//		int pos = 0;  // ��ǰָ��� pattern �ַ�
//		str.push_back(' ');  // ��ĩβ��һ���ո�
//		for (int i = 0; i < str.length(); i++) {
//			if (str[i] == ' ') {  // �����ո񣬲�ֳ�һ���µ���
//				if (pos == pattern.length()) {  // ���Էֳ�һ�����ʣ�����û�� pattern �ַ���Ӧ
//					return false;
//				}
//				if (word_map.find(word) == word_map.end()) {  // ����δ�����ڹ�ϣӳ����
//					if (used[pattern[pos]]) {  // �����ǰ pattern �ַ��Ѿ�ʹ����
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
//				word = "";  // ���һ�����ʵĲ������ѯ����� word
//				pos++;
//			}
//			else {
//				word += str[i];
//			}
//		}
//		if (pos != pattern.length()) {
//			return false;  // �ж���� pattern �ַ�
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