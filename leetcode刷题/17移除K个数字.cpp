//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//class Solution {
//public:
//	string removeKdigits(string num, int k) {
//		std::vector<int>s;
//		std::string res = "";  // �������յĽ��
//		for (int i = 0; i < num.length(); i++) {
//			int number = num[i] - '0';  // ���ַ��͵�����ת��Ϊ����ʹ��
//			while (s.size() != 0 && k > 0 && number < s[s.size()-1]) {
//				s.pop_back();  // ����ջ��Ԫ��
//				k--;
//			}
//			if (number != 0 || s.size() != 0) {
//				s.push_back(number);
//			}
//		}
//		while (s.size() != 0 && k > 0) {  // ���ջ��Ϊ�գ�����Ȼ����ɾ��������
//			s.pop_back();  // ���� k ��ջ��Ԫ��
//			k--;
//		}
//		for (int i = 0; i < s.size(); i++) {
//			res.append(1, '0' + s[i]);
//		}
//		if (res == "") {
//			res = "0";
//		}
//		return res;
//	}
//};
//
//int main() {
//	Solution solve;
//	string res = solve.removeKdigits("1432219", 3);
//	cout << "res: " << res.c_str() << endl;
//	string res1 = solve.removeKdigits("100200", 1);
//	cout << "res1: " << res1 << endl;
//	system("pause");
//	return 0;
//}