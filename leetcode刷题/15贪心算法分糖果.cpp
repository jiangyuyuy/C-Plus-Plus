//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//
//class Solution {
//public:
//	int findContentChildren(vector<int>& g, vector<int>& s) {
//		sort(g.begin(), g.end());
//		sort(s.begin(), s.end());
//		int child = 0;  // child ����������
//		int cookie = 0;  // cookie �������˼����ǹ�
//		while (child < g.size() && cookie < s.size()) {
//			if (g[child] <= s[cookie]) {
//				child++;
//			}
//			cookie++;
//		}
//		return child;
//	}
//};
//
//int main() {
//	Solution solve;
//	vector<int>g;
//	vector<int>s;
//	int arr_g[] = { 5,10,2,9,15,9 };
//	int arr_s[] = { 6,1,20,3,8 };
//	for (int i = 0; i < 6; i++) {
//		g.push_back(arr_g[i]);
//	}
//	for (int i = 0; i < 5; i++) {
//		s.push_back(arr_s[i]);
//	}
//
//	cout << "����ĺ�������: " << solve.findContentChildren(g, s) << endl;
//	system("pause");
//	return 0;
//}