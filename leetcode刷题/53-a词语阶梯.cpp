//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
//class Solution {
//public:
//	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//		map<string, vector<string>>graph;
//		construct_graph(beginWord, wordList, graph);
//		return BFS_graph(beginWord, endWord, graph);
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
//		vector<string>& wordList, 
//		map<string, vector<string>>& graph) {
//		wordList.push_back(beginWord);
//		for (int i = 0; i < wordList.size(); i++) {
//			graph[wordList[i]] = vector<string>();
//		}
//		for (int i = 0; i < wordList.size(); i++) {
//			for (int j = i+1; j < wordList.size(); j++) {
//				if (connect(wordList[i], wordList[j])) {
//					graph[wordList[i]].push_back(wordList[j]);
//					graph[wordList[j]].push_back(wordList[i]);
//				}
//			}
//		}
//	}
//	int BFS_graph(string& beginWord, string& endWord, map<string, vector<string>>& graph) {
//		queue<pair<string, int>>Q;  // ��������<����, ����>
//		set<string>visit;  // ��¼�Ѿ����ʵĶ���
//		Q.push(make_pair(beginWord, 1));  // �����ʼ�㣬��ʼ�㲽��Ϊ 1
//		visit.insert(beginWord);  // �������ѷ���
//		while (!Q.empty()) {
//			string node = Q.front().first;
//			int step = Q.front().second;
//			Q.pop();
//			if (node == endWord) {
//				return step;
//			}
//			const std::vector<string>& neightbors = graph[node];  // ȡ�� node �������ڽӵ�
//			for (int i = 0; i < neightbors.size(); i++) {
//				if (visit.find(neightbors[i]) == visit.end()) {  // ���ڽڵ�δ�����������
//					Q.push(make_pair(neightbors[i], step + 1));
//					visit.insert(neightbors[i]);
//				}
//			}
//		}
//		return 0;
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
//	int res = solve.ladderLength(beginWord, endWord, wordList);
//	cout << "Res: " << res << endl;
//	system("pause");
//	return 0;
//}