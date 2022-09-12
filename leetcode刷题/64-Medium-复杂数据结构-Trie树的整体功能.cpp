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
//		// 插入元素
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
//	bool search(const char* word) {
//		// 搜索元素
//		TrieNode* ptr = &_root;
//		while (*word) {
//			int pos = *word - 'a';
//			if (!ptr->child[pos]) {
//				return false;
//			}
//			ptr = ptr->child[pos];
//			word++;
//		}
//		return ptr->is_end;
//	}
//	bool startsWith(const char* prefix) {
//		// 确定 trie 是否有前缀为 prefix 的单词
//		TrieNode* ptr = &_root;
//		while (*prefix) {
//			int pos = *prefix - 'a';
//			if (!ptr->child[pos]) {
//				return false;
//			}
//			ptr = ptr->child[pos];
//			prefix++;
//		}
//		return true;
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
//	vector<TrieNode*>_node_vec;  // 储存所有 new 出来的节点
//	TrieNode _root;
//};
//
//void preorder_trie(TrieNode*node,int layer){
//	// trietree 的前序遍历
//	for (int i = 0; i < TRIE_MAX_CHAR_NUM; i++) {
//		if (node->child[i]) {
//			cout << " * ";
//			for (int j = 0; j < layer; j++) {
//				printf("-----");
//			}
//			printf("%c", i + 'a');
//			if (node->child[i]->is_end) {
//				printf("(end)");
//			}
//			cout << endl;
//			preorder_trie(node->child[i], layer + 1);
//		}
//	}
//}
//
//void getallwordfromtrietree(TrieNode* node, 
//	string& word,
//	vector<string>&word_list){
//	for (int i = 0; i < TRIE_MAX_CHAR_NUM; i++) {
//		if (node->child[i]) {
//			word.push_back(i + 'a');  // 将字符入栈
//			if (node->child[i]->is_end) {
//				word_list.push_back(word);
//			}
//			getallwordfromtrietree(node->child[i], word, word_list);
//			word.erase(word.length() - 1, 1);  // 回溯，弹出栈顶元素
//		}
//	}
//}
//
//int main() {
//	TrieTree trie_tree;
//	cout << "插入单词 abcd " << endl;
//	cout << "插入单词 abc " << endl;
//	cout << "插入单词 abd " << endl;
//	cout << "插入单词 b " << endl;
//	cout << "插入单词 bcd " << endl;
//	cout << "插入单词 efg " << endl;
//	trie_tree.insert("abcd");
//	trie_tree.insert("abc");
//	trie_tree.insert("abd");
//	trie_tree.insert("b");
//	trie_tree.insert("bcd");
//	trie_tree.insert("efg");
//	printf("前序遍历: \n");
//	preorder_trie(trie_tree.root(), 0);
//	printf("\n");
//	vector<string>word_list;
//	string word;
//	printf("所有的单词: \n");
//	getallwordfromtrietree(trie_tree.root(), word, word_list);
//	for (int i = 0; i < word_list.size(); i++) {
//		cout << word_list[i] << endl;
//	}
//	cout << "<---------- 搜索 ---------->" << endl;
//	printf("搜索单词 abcd: %d\n", trie_tree.search("abcd"));
//	printf("搜索单词 abc: %d\n", trie_tree.search("abc"));
//	printf("搜索单词 ab: %d\n", trie_tree.search("ab"));
//	printf("搜索单词 jiang: %d\n", trie_tree.search("jiang"));
//	cout << "<---------- 搜索前缀 ---------->" << endl;
//	printf("搜索前缀 a: %d\n", trie_tree.startsWith("a"));
//	printf("搜索前缀 ab: %d\n", trie_tree.startsWith("ab"));
//	printf("搜索前缀 j: %d\n", trie_tree.startsWith("j"));
//	cout << "<---------- 插入单词 ---------->" << endl;
//	cout << "插入单词 jiang " << endl;
//	trie_tree.insert("jiang");
//	printf("搜索单词 jiang: %d\n", trie_tree.search("jiang"));
//	printf("搜索前缀 j: %d\n", trie_tree.startsWith("j"));
//	system("pause");
//	return 0;
//}