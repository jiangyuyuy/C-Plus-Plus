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
//	string node;  // �����ڵ�
//	int parent_pos;  // ǰ���ڵ��ڶ����е�λ��
//	int step;  // ���ﵱǰ�ڵ�Ĳ���
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
//		vector<vector<string>>result;  // ���ս��
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
//				   vector<Qitem>& Q,  // ʹ�� vector ʵ�ֶ��У�����������Ϣ
//				   vector<int>& end_word_pos) {  // �յ� endWord ���ڶ��е�λ���±�
//		map<string, int>visit;  // <����, ����>
//		int min_step = 0;  // ����endWord����С����
//		Q.push_back(Qitem(beginWord, -1, 1));  // ��ʼ���ʵ�ǰ��Ϊ-1
//		visit[beginWord] = 1;  // �����ʼ���ʲ���Ϊ1
//		int front = 0;  // ����ͷָ��front��ָ�� vector ��ʾ�Ķ���ͷ
//		while (front != Q.size()) {
//			const string& node = Q[front].node;
//			int step = Q[front].step;
//			if (min_step != 0 && step > min_step) {
//				// step > min_step�����յ������·�����Ѿ��������
//				break;
//			}
//			if (node == endWord) {
//				// �����������ʱ����¼�����յ����С����
//				min_step = step;
//				end_word_pos.push_back(front);
//			}
//			const vector<string>& neightbors = graph[node];
//			for (int i = 0; i < neightbors.size(); i++) {
//				if (visit.find(neightbors[i]) == visit.end() 
//					|| visit[neightbors[i]] == step + 1) {
//					// �ڵ�û�����ʵ���������һ�����·��
//					Q.push_back(Qitem(neightbors[i], front, step + 1));
//					visit[neightbors[i]] = step + 1;  // ��ǵ����ڽӵ����С����
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