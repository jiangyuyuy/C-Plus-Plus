//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//struct GraphNode {
//	int label;
//	vector<GraphNode*>neighbors;
//	GraphNode(int x) :label(x) {}
//};
//
//bool DFS_graph(GraphNode* node, vector<int>&visit) {
//	visit[node->label] = 0;  // 标记为正在访问
//	for (int i = 0; i < node->neighbors.size(); i++) {
//		if (visit[node->neighbors[i]->label] == -1) {
//			if (DFS_graph(node->neighbors[i], visit) == 0) {
//				return false;
//			}
//		}
//		else if (visit[node->neighbors[i]->label] == 0) {
//			return false;
//		}
//	}
//	visit[node->label] = 1;
//	return true;
//}
//
//// 深度搜索
//class Solution1 {
//public:
//	int canFinishCourse(int numCourses, 
//		vector<pair<int, int>>& prerequisities) {  // pair<课程1，课程2>，课程1依赖课程2
//		vector<GraphNode*>graph;  // 邻接表
//		vector<int>visit;  // -1 表示没有访问过，0 表示正在访问，1 表示访问完成
//		for (int i = 0; i < numCourses; i++) {
//			graph.push_back(new GraphNode(i));  // 创建图的节点，并赋访问状态为空
//			visit.push_back(-1);
//		}
//		for (int i = 0; i < prerequisities.size(); i++) {  // 创建图，连接图的顶点
//			GraphNode* begin = graph[prerequisities[i].second];
//			GraphNode* end = graph[prerequisities[i].first];
//			begin->neighbors.push_back(end);
//		}
//		for (int i = 0; i < graph.size(); i++) {
//			if (visit[i] == -1 && !DFS_graph(graph[i], visit)) {
//				// 如果节点没有遇到环，进行 DFS，如果遇到环，返回 false
//				return false;
//			}
//		}
//		for (int i = 0; i < numCourses; i++) {
//			delete graph[i];
//		}
//		return true;
//	}
//};
//
//int main() {
//	Solution1 solve;
//
//	vector<pair<int, int>>prerequisties;
//	prerequisties.push_back(std::make_pair(1, 0));
//	prerequisties.push_back(std::make_pair(2, 0));
//	prerequisties.push_back(std::make_pair(3, 1));
//	prerequisties.push_back(std::make_pair(3, 2));
//	cout << "canFinishCourses: " << 
//		solve.canFinishCourse(4, prerequisties) << endl;
//	system("pause");
//	return 0;
//}