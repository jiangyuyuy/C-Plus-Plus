//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
// M[i][j] = 1 表示第 i 个人和第 j 个人是朋友
// 
//class Solution {
//public:
//	void DFS_graph(int u,  // 正在搜索的节点
//		vector<vector<int>>& graph,  // 搜索的图
//		vector<int>& visit) {
//		visit[u] = 1;
//		for (int i = 0; i < graph[u].size(); i++) {
//			if (visit[i] == 0 && graph[u][i] == 1) {
//				DFS_graph(i, graph, visit);
//			}
//		}
//	}
//	int fndCircleNum(vector<vector<int>>& M) {
//		vector<int>visit(M.size(), 0);
//		int count = 0;
//		for (int i = 0; i < M.size(); i++) {
//			if (visit[i] == 0) {
//				DFS_graph(i, M, visit);
//				count++;
//			}
//		}
//		return count;
//	}
//};
//
//int main() {
//	const int row = 4;
//	const int column = 4;
//	int test[row][column] = { {1,1,0,0},{1,1,1,0},{1,0,0,0},{0,0,0,1} };
//	vector<vector<int>>graph;
//	for (int i = 0; i < row; i++) {
//		graph.push_back(vector<int>());
//		for (int j = 0; j < column; j++) {
//			graph[i].push_back(test[i][j]);
//		}
//	}
//	Solution solve;
//	int count = solve.fndCircleNum(graph);
//	cout << "Count: " << count << endl;
//	system("pause");
//	return 0;
//}