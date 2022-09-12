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
//		// �ڲ���������ĸ�������Ϊ key,���ַ���������vector<string>��Ϊvalue����������ַ�������ͬ���ַ���(anangram��
//		vector<vector<string>>result;  // �������յĽ��d
//		for (int i = 0; i < strs.size(); i++) {  // ������������
//			string str = strs[i];
//			std::sort(str.begin(), str.end());  // �� str �ڲ���������
//			if (anagram.find(str) == anagram.end()) {  // �޷��� hash �����ҵ� str
//				std::vector<string>item;  // ����һ���յ��ַ���
//				anagram[str] = item;  // �������� strs[i] ��Ϊ key
//			}
//			anagram[str].push_back(strs[i]);  // �ڶ�Ӧ���ַ��������� push ���
//		}
//		map<string, vector<string>>::iterator it;  // it ��ʾ����ָ�룬ָ���׵�ַ
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
//		// �ڲ���������ĸ�������Ϊ key,���ַ���������vector<string>��Ϊvalue����������ַ�������ͬ���ַ���(anangram��
//		vector<vector<string>>result;  // �������յĽ��d
//		for (int i = 0; i < strs.size(); i++) {  // ������������
//			vector<int>vec;
//			change_str_vec(strs[i], vec);
//			if (anagram.find(vec) == anagram.end()) {  // �޷��� hash �����ҵ� str
//				std::vector<string>item;  // ����һ���յ��ַ���
//				anagram[vec] = item;  // �������� strs[i] ��Ϊ key
//			}
//			anagram[vec].push_back(strs[i]);  // �ڶ�Ӧ���ַ��������� push ���
//		}
//		map<vector<int>, vector<string>>::iterator it;  // it ��ʾ����ָ�룬ָ���׵�ַ
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