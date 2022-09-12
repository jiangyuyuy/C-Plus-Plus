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
//	bool is_window_ok(int map_s[], int map_t[], vector<int>& vec_t) {
//		// �ж� t �е��ַ��Ƿ�ȫ�� s �г��ֹ�
//		for (int i = 0; i < vec_t.size(); i++) {
//			if (map_s[vec_t[i]] < map_t[vec_t[i]]) {
//				return false;
//			}
//		}
//		return true;
//	}
//	string minWindow(string s, string t) {
//		const int MAX_ARRAY_LEN = 128;
//		int map_t[MAX_ARRAY_LEN] = { 0 };
//		int map_s[MAX_ARRAY_LEN] = { 0 };
//		vector<int>vec_t;  // ��¼ t �ַ���������Щ�ַ�
//		for (int i = 0; i < t.length(); i++) {
//			map_t[t[i]]++;  // ���� t����¼ s �ַ������ַ�����
//		}
//		for (int i = 0; i < MAX_ARRAY_LEN; i++) {
//			if (map_t[i] > 0) {
//				vec_t.push_back(i);
//			}
//		}
//		int window_begin = 0;  // ��С������ʼָ��
//		string result;  // ��С���ڶ�Ӧ���ַ���
//		for (int i = 0; i < s.length(); i++) {  // i �����˴��ڵ�βָ��
//			map_s[s[i]]++;
//			while (window_begin < i) {  // ���ڵ�ͷָ�벻�ܳ���βָ��
//				char begin_ch = s[window_begin];
//				if (map_t[begin_ch] == 0) {
//					// ��ǰͷָ��û���� t �г��ֹ�
//					window_begin++;
//				}
//				else if (map_s[begin_ch] > map_t[begin_ch]) {
//					// ͷָ��ǰ�ƣ�ָ���ַ��ĸ���ҲҪ��һ��
//					map_s[begin_ch]--;
//					window_begin++;
//				}
//				else {
//					break;  // ����ѭ��
//				}
//			}
//			if (is_window_ok(map_s, map_t, vec_t)) {
//				int new_window_len = i - window_begin + 1;
//				if (result == "" || result.length() > new_window_len) {
//					result = s.substr(window_begin, new_window_len);
//				}
//			}
//		}
//		return result;
//	}
//};
//
//int main() {
//	Solution solve;
//	string s = "ADOBECODEBANC";
//	string t = "ABC";
//	string s1 = "MADOBCCABEC";
//	string t1 = "ABCC";
//	string res = solve.minWindow(s, t);
//	cout << "minWindowSubstr: " << res.c_str() << endl;
//	string res1 = solve.minWindow(s1, t1);
//	cout << "minWindowSubstr1: " << res1.c_str() << endl;
//	system("pause");
//	return 0;
//}