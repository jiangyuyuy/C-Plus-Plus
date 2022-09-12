#include<iostream>
#include<vector>
using namespace std;

struct GraphNode {
	int label;
	vector<GraphNode*>neighbors;
	GraphNode(int x) :label(x) {}
};

int main() {
	const int Max_N = 5;
	GraphNode* Graph[Max_N];
	for (int i = 0; i < Max_N; i++) {
		Graph[i] = new GraphNode(i);
	}
	Graph[0]->neighbors.push_back(Graph[2]);
	Graph[0]->neighbors.push_back(Graph[4]);
	Graph[1]->neighbors.push_back(Graph[0]);
	Graph[1]->neighbors.push_back(Graph[2]);
	Graph[2]->neighbors.push_back(Graph[3]);
	Graph[3]->neighbors.push_back(Graph[4]);
	Graph[4]->neighbors.push_back(Graph[3]);

	cout << "Graph: \n";
	for (int i = 0; i < Max_N; i++) {
		cout << "LABEL" << i << ": ";
		for (int j = 0; j < Graph[i]->neighbors.size(); j++) {
			cout << Graph[i]->neighbors[j]->label << " ";
		}
		cout << endl;
	}
	system("pause");
	cout << endl;
	return 0;
}