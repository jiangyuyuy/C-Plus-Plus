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
//	visit[node->label] = 0;  // ���Ϊ���ڷ���
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
//// �������
//class Solution1 {
//public:
//	int canFinishCourse(int numCourses, 
//		vector<pair<int, int>>& prerequisities) {  // pair<�γ�1���γ�2>���γ�1�����γ�2
//		vector<GraphNode*>graph;  // �ڽӱ�
//		vector<int>visit;  // -1 ��ʾû�з��ʹ���0 ��ʾ���ڷ��ʣ�1 ��ʾ�������
//		for (int i = 0; i < numCourses; i++) {
//			graph.push_back(new GraphNode(i));  // ����ͼ�Ľڵ㣬��������״̬Ϊ��
//			visit.push_back(-1);
//		}
//		for (int i = 0; i < prerequisities.size(); i++) {  // ����ͼ������ͼ�Ķ���
//			GraphNode* begin = graph[prerequisities[i].second];
//			GraphNode* end = graph[prerequisities[i].first];
//			begin->neighbors.push_back(end);
//		}
//		for (int i = 0; i < graph.size(); i++) {
//			if (visit[i] == -1 && !DFS_graph(graph[i], visit)) {
//				// ����ڵ�û�������������� DFS����������������� false
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