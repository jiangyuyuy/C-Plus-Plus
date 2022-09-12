//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//
//class Solution {
//public:
//	vector<vector<string>>solveNQueens(int n) {
//		vector<vector<string>>result;  // 储存最终结果的数组
//		vector<vector<int>>mark;  // 标记棋盘是否可以放置皇后的二维数组
//		vector<string>location;  // 储存某个摆放位置
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
//						vector<vector<int>>& mark) {  // mark 表示棋盘
//		static const int dx[] = { -1,1,0,0,-1,-1,1,1 };
//		static const int dy[] = { 0,0,-1,1,-1,1,-1,1 };  // 方向数组
//		mark[x][y] = 1;  // (x, y)放置皇后
//		for (int i = 1; i < mark.size(); i++) {
//			for (int j = 0; j < 8; j++) {
//				int new_x = x + i * dx[j];
//				int new_y = y + i * dy[j];
//				if (new_x >= 0 && new_x < mark.size() &&
//					new_y >= 0 && new_y < mark.size()) {
//					mark[new_x][new_y] = 1;  // 检查是否在棋盘内
//				}
//			}
//		}
//	}
//
//	void generate(int k,  // 代表完成了几个皇后
//				  int n,  
//				  vector<string>& location,  // 储存某次结果
//				  vector<vector<string>>& result,  // 储存最终结果 
//			   	  vector<vector<int>>& mark) {  // 棋盘的标记数组
//		if (k == n) {
//			result.push_back(location);
//			return;
//		}
//		for (int i = 0; i < n; i++) {
//			if (mark[k][i] == 0) {
//				vector<vector<int>>tmp_mark = mark;  // 记录回溯前的mark镜像
//				location[k][i] = '*';  // 放置皇后
//				put_down_queen(k, i, mark);
//				generate(k + 1, n, location, result, mark);  // 递归下一行皇后
//				mark = tmp_mark;  // 将 mark 重新赋值为回溯前的状态
//				location[k][i] = '.';  // 将当前尝试的皇位位置重新设置为 '.'
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
//		cout << "第 {" << i + 1 << "} 皇后放置方法." << endl;
//		for (int j = 0; j < result[i].size(); j++) {
//			cout << "     " << result[i][j].c_str() << endl;
//		}
//		cout << endl;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}