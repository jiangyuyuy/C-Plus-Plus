//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
//struct Qitem {
//	string node;  // 搜索节点
//	int parent_pos;  // 前驱节点在队列中的位置
//	int step;  // 到达当前节点的步数
//	Qitem(string node, int parent_pos, int step)
//		:node(node), parent_pos(parent_pos), step(step) {
//	}
//};
//
//class Solution {
//public:
//	vector<vector<string>>findLadders(string beginWord, 
//							   		  string endWord, 
//									  vector<string>& wordList) {
//		map<string, vector<string>>graph;
//		construct_graph(beginWord, wordList, graph);
//		vector<Qitem>Q;
//		vector<int>end_word_pos;
//		BFS_graph(beginWord, endWord, graph, Q, end_word_pos);
//		vector<vector<string>>result;  // 最终结果
//		for (int i = 0; i < end_word_pos.size(); i++) {
//			int pos = end_word_pos[i];
//			vector<string>path;
//			while (pos != -1) {
//				path.push_back(Q[pos].node);
//				pos = Q[pos].parent_pos;
//			}
//			result.push_back(vector<string>());
//			for (int j = path.size() - 1; j >= 0; j--) {
//				result[i].push_back(path[j]);
//			}
//		}
//		return result;
//	}
//	bool connect(const std::string& word1, const std::string& word2) {
//		int cnt = 0;
//		for (int i = 0; i < word1.length(); i++) {
//			if (word1[i] != word2[i]) {
//				cnt++;
//			}
//		}
//		return cnt == 1;
//	}
//	void construct_graph(string& beginWord,
//						 vector<string>& wordList,
//						 map<string, vector<string>>& graph) {
//		int has_begin_word = 0;
//		for (int i = 0; i < wordList.size(); i++) {
//			if (wordList[i] == beginWord) {
//				has_begin_word = 1;
//			}
//			graph[wordList[i]] = vector<string>();
//		}
//		for (int i = 0; i < wordList.size(); i++) {
//			for (int j = i + 1; j < wordList.size(); j++) {
//				if (connect(wordList[i], wordList[j])) {
//					graph[wordList[i]].push_back(wordList[j]);
//					graph[wordList[j]].push_back(wordList[i]);
//				}
//			}
//			if (has_begin_word == 0 && connect(beginWord, wordList[i])) {
//				graph[beginWord].push_back(wordList[i]);
//			}
//		}
//	}
//	void BFS_graph(string& beginWord, 
//				   string& endWord, 
//				   map<string, vector<string>>& graph, 
//				   vector<Qitem>& Q,  // 使用 vector 实现队列，保存所有信息
//				   vector<int>& end_word_pos) {  // 终点 endWord 所在队列的位置下标
//		map<string, int>visit;  // <单词, 步数>
//		int min_step = 0;  // 到达endWord的最小步数
//		Q.push_back(Qitem(beginWord, -1, 1));  // 起始单词的前驱为-1
//		visit[beginWord] = 1;  // 标记起始单词步数为1
//		int front = 0;  // 队列头指针front，指向 vector 表示的队列头
//		while (front != Q.size()) {
//			const string& node = Q[front].node;
//			int step = Q[front].step;
//			if (min_step != 0 && step > min_step) {
//				// step > min_step代表到终点的所有路径都已经搜索完成
//				break;
//			}
//			if (node == endWord) {
//				// 当搜索到结果时，记录到达终点的最小步数
//				min_step = step;
//				end_word_pos.push_back(front);
//			}
//			const vector<string>& neightbors = graph[node];
//			for (int i = 0; i < neightbors.size(); i++) {
//				if (visit.find(neightbors[i]) == visit.end() 
//					|| visit[neightbors[i]] == step + 1) {
//					// 节点没被访问到或者有另一条最短路径
//					Q.push_back(Qitem(neightbors[i], front, step + 1));
//					visit[neightbors[i]] = step + 1;  // 标记到达邻接点的最小步数
//				}
//			}
//			front++;
//		}
//	}
//};
//
//int main() {
//	string beginWord = "hit";
//	string endWord = "cog";
//	vector<string>wordList;
//	wordList.push_back("hot");
//	wordList.push_back("dot");
//	wordList.push_back("dog");
//	wordList.push_back("lot");
//	wordList.push_back("log");
//	wordList.push_back("cog");
//	Solution solve;
//	vector<vector<string>> res = solve.findLadders(beginWord, endWord, wordList);
//	for (int i = 0; i < res.size(); i++) {
//		for (int j = 0; j < res[i].size(); j++) {
//			printf("[%s] ", res[i][j].c_str());
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}