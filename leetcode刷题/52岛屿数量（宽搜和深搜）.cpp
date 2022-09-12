#include<vector>
#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
#include<queue>
#include<map>

class Solution {
public:
	int numIslands(vector<vector<char>>& grid) {
		int island_num = 0;
		vector<vector<int>>mark;
		for (int i = 0; i < grid.size(); i++) {
			mark.push_back(vector<int>());
			for (int j = 0; j < grid[i].size(); j++) {
				mark[i].push_back(0);
			}
		}
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[i].size(); j++) {
				if (grid[i][j] == '1' && mark[i][j] == 0) {
					DFS(mark, grid, i, j);
					// 深度优先搜索
					island_num++;
					// 单一的搜索，不需要回溯，不需要求最短路径，深搜和宽搜都可以
				}
			}
		}
		return island_num;
	}
	// 深度优先搜索
	void DFS(vector<vector<int>>& mark, vector<vector<char>>& grid, int x, int y) {
		mark[x][y] = 1;
		static const int dx[] = { -1,1,0,0 };  // 方向数组
		static const int dy[] = { 0,0,-1,1 };
		for (int i = 0; i < 4; i++) {
			int newx = x + dx[i];  // (x, y)周边的四个坐标
			int newy = y + dy[i];
			if (newx < 0 || newx >= mark.size() || newy < 0 || newy >= mark[newx].size()) {
				// 超过数组边界
				continue;
			}
			if (grid[newx][newy] == '1' && mark[newx][newy] == 0) {
				DFS(mark, grid, newx, newy);
			}
		}
	}
	// 宽度优先搜索
	void BFS(vector<vector<int>>& mark, vector<vector<char>>& grid, int x, int y) {
		static const int dx[] = { -1,1,0,0 };  // 方向数组
		static const int dy[] = { 0,0,-1,1 };
		std::queue<std::pair<int, int>>Q;  // 宽度优先搜索队列
		Q.push(std::make_pair(x, y));  // 将 (x, y) push 进队列，并做上标记
		mark[x][y] = 1;
		while (!Q.empty()) {
			x = Q.front().first;
			y = Q.front().second;
			Q.pop();  // 弹出头元素
			for (int i = 0; i < 4; i++) {
				int newx = x + dx[i];  // (x, y)周边的四个坐标
				int newy = y + dy[i];
				if (newx < 0 || newx >= mark.size() || newy < 0 || newy >= mark[newx].size()) {
					// 超过数组边界
					continue;
				}
				if (grid[newx][newy] == '1' && mark[newx][newy] == 0) {
					Q.push(std::make_pair(newx, newy));  // 将新位置push进队列
					mark[newx][newy] = 1;
				}
			}
		}
	}
};

int main() {
	vector<vector<char>>grid;
	char str[10][10] = { "10000",
                         "01000",
                         "00100",
                         "00011" };
	for (int i = 0; i < 4; i++) {
		grid.push_back(vector<char>());
		for (int j = 0; j < 5; j++) {
			grid[i].push_back(str[i][j]);
		}
	}
	Solution solve;
	int island_num = solve.numIslands(grid);
	cout << "isLandNum: " << island_num << endl;
	system("pause");
	return 0;
}

