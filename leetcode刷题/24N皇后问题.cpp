//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//class Solution {
//public:
//	vector<vector<string>>solveNQueens(int n) {
//		vector<vector<string>>result;  // �������ս��������
//		vector<vector<int>>mark;  // ��������Ƿ���Է��ûʺ�Ķ�ά����
//		vector<string>location;  // ����ĳ���ڷ�λ��
//		for (int i = 0; i < n; i++) {
//			mark.push_back((vector<int>()));
//			for (int j = 0; j < n; j++) {
//				mark[i].push_back(0);
//			}
//			location.push_back("");
//			location[i].append(n, '.');
//		}
//		generate(0, n, location, result, mark);
//		return result;
//	}
//	void put_down_queen(int x,
//						int y,
//						vector<vector<int>>& mark) {  // mark ��ʾ����
//		static const int dx[] = { -1,1,0,0,-1,-1,1,1 };
//		static const int dy[] = { 0,0,-1,1,-1,1,-1,1 };  // ��������
//		mark[x][y] = 1;  // (x, y)���ûʺ�
//		for (int i = 1; i < mark.size(); i++) {
//			for (int j = 0; j < 8; j++) {
//				int new_x = x + i * dx[j];
//				int new_y = y + i * dy[j];
//				if (new_x >= 0 && new_x < mark.size() &&
//					new_y >= 0 && new_y < mark.size()) {
//					mark[new_x][new_y] = 1;  // ����Ƿ���������
//				}
//			}
//		}
//	}
//
//	void generate(int k,  // ��������˼����ʺ�
//				  int n,  
//				  vector<string>& location,  // ����ĳ�ν��
//				  vector<vector<string>>& result,  // �������ս�� 
//			   	  vector<vector<int>>& mark) {  // ���̵ı������
//		if (k == n) {
//			result.push_back(location);
//			return;
//		}
//		for (int i = 0; i < n; i++) {
//			if (mark[k][i] == 0) {
//				vector<vector<int>>tmp_mark = mark;  // ��¼����ǰ��mark����
//				location[k][i] = '*';  // ���ûʺ�
//				put_down_queen(k, i, mark);
//				generate(k + 1, n, location, result, mark);  // �ݹ���һ�лʺ�
//				mark = tmp_mark;  // �� mark ���¸�ֵΪ����ǰ��״̬
//				location[k][i] = '.';  // ����ǰ���ԵĻ�λλ����������Ϊ '.'
//			}
//		}
//	}
//};
//
//
//int main() {
//	Solution solve;
//	vector<vector<string>>result;
//	result = solve.solveNQueens(5);
//	for (int i = 0; i < result.size(); i++) {
//		cout << "�� {" << i + 1 << "} �ʺ���÷���." << endl;
//		for (int j = 0; j < result[i].size(); j++) {
//			cout << "     " << result[i][j].c_str() << endl;
//		}
//		cout << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}