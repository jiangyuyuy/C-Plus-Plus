//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//#include<map>
//#include<set>
//
//#define TRIE_MAX_CHAR_NUM 26
//
//struct TrieNode {
//	TrieNode* child[TRIE_MAX_CHAR_NUM];
//	bool is_end;
//	TrieNode() :is_end(false) {
//		for (int i = 0; i < TRIE_MAX_CHAR_NUM; i++) {
//			child[i] = 0;
//		}
//	}
//};
//
//class TrieTree {
//public:
//	TrieTree() {}
//	~TrieTree() {
//		for (int i = 0; i < _node_vec.size(); i++) {
//			delete _node_vec[i];
//		}
//	}
//	void insert(const char* word) {
//		TrieNode* ptr = &_root;
//		while (*word) {
//			int pos = *word - 'a';
//			if (!ptr->child[pos]) {
//				ptr->child[pos] = new_node();
//			}
//			ptr = ptr->child[pos];
//			word++;
//		}
//		ptr->is_end = true;
//	}
//	TrieNode* root() {
//		return &_root;
//	}
//private:
//	TrieNode* new_node() {
//		TrieNode* node = new TrieNode();
//		_node_vec.push_back(node);
//		return node;
//	}
//	vector<TrieNode*>_node_vec;
//	TrieNode _root;
//};
//
//class WordDictionary {
//public:
//	WordDictionary() {}
//	void addWord(string word) {
//		_trie_tree.insert(word.c_str());
//	}
//	bool search_trie(TrieNode* node, const char* word) {
//		if (*word == '\0') {
//			if (node->is_end) {
//				return true;
//			}
//			return false;
//		}
//		if (*word == '.') {
//			for (int i = 0; i < TRIE_MAX_CHAR_NUM; i++) {
//				if (node->child[i] && search_trie(node->child[i], word + 1)) {
//					return true;
//				}
//			}
//		}
//		else {
//			int pos = *word - 'a';
//			if (node->child[pos] && search_trie(node->child[pos], word + 1)) {
//				return true;
//			}
//		}
//		return false;
//	}
//	bool search(string word) {
//		return search_trie(_trie_tree.root(), word.c_str());
//	}
//private:
//	TrieTree _trie_tree;
//};
//
//int main() {
//	WordDictionary word_dictionary;
//	word_dictionary.addWord("bad");
//	word_dictionary.addWord("dad");
//	word_dictionary.addWord("mad");
//	printf("%d\n", word_dictionary.search("pad"));
//	printf("%d\n", word_dictionary.search("mad"));
//	printf("%d\n", word_dictionary.search(".ad"));
//	system("pause");
//	return 0;
//}