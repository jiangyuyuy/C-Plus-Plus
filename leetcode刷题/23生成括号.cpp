//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//class Solution {
//public:
//	vector<string>generateParenthesis(int n) {
//		vector<string>result;
//		generate("", n, n, result);
//		return result;
//	}
//	void generate(string item,  // �����ַ��� item
//			      int left,  // ��ǰ���Է��������ŵ�����
//			      int right,  // ��ǰ���Է��������ŵ�����
//				  vector<string>& result) {
//		if (left == 0 && right == 0) {
//			result.push_back(item);
//			return;
//		}
//		if (left > 0) {
//			generate(item + '<', left - 1, right, result);
//		}
//		if (left < right) {
//			generate(item + '>', left, right-1, result);
//		}
//	}
//};
//
//void generate(std::string item, int n, std::vector<std::string>& result) {
//	if (item.size() == 2 * n) {
//		// ���ַ�������Ϊ������������ʱ�������ݹ�
//		result.push_back(item);
//		cout << " 111 " << endl;
//		for (int i = 0; i < result.size(); i++) {
//			cout << "---res---: " << result[i].c_str() << endl;
//		}
//		return;
//	}
//	generate(item + '<', n, result);
//	cout << " 222 " << endl;
//	for (int i = 0; i < result.size(); i++) {
//		cout << "---res---: " << result[i].c_str() << endl;
//	}
//	generate(item + '>', n, result);
//	cout << " 333 " << endl;
//	for (int i = 0; i < result.size(); i++) {
//		cout << "---res---: " << result[i].c_str() << endl;
//	}
//}
//
//int main() {
//	Solution solve;
//
//	vector<string>result = solve.generateParenthesis(3);
//	// generate("", 1, result);
//	for (int i = 0; i < result.size(); i++) {
//		cout << "res: " << result[i].c_str() << endl;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}