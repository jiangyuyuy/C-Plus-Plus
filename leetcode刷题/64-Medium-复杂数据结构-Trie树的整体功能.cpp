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
//		// ����Ԫ��
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
//		// ����Ԫ��
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
//		// ȷ�� trie �Ƿ���ǰ׺Ϊ prefix �ĵ���
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
//	vector<TrieNode*>_node_vec;  // �������� new �����Ľڵ�
//	TrieNode _root;
//};
//
//void preorder_trie(TrieNode*node,int layer){
//	// trietree ��ǰ�����
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
//			word.push_back(i + 'a');  // ���ַ���ջ
//			if (node->child[i]->is_end) {
//				word_list.push_back(word);
//			}
//			getallwordfromtrietree(node->child[i], word, word_list);
//			word.erase(word.length() - 1, 1);  // ���ݣ�����ջ��Ԫ��
//		}
//	}
//}
//
//int main() {
//	TrieTree trie_tree;
//	cout << "���뵥�� abcd " << endl;
//	cout << "���뵥�� abc " << endl;
//	cout << "���뵥�� abd " << endl;
//	cout << "���뵥�� b " << endl;
//	cout << "���뵥�� bcd " << endl;
//	cout << "���뵥�� efg " << endl;
//	trie_tree.insert("abcd");
//	trie_tree.insert("abc");
//	trie_tree.insert("abd");
//	trie_tree.insert("b");
//	trie_tree.insert("bcd");
//	trie_tree.insert("efg");
//	printf("ǰ�����: \n");
//	preorder_trie(trie_tree.root(), 0);
//	printf("\n");
//	vector<string>word_list;
//	string word;
//	printf("���еĵ���: \n");
//	getallwordfromtrietree(trie_tree.root(), word, word_list);
//	for (int i = 0; i < word_list.size(); i++) {
//		cout << word_list[i] << endl;
//	}
//	cout << "<---------- ���� ---------->" << endl;
//	printf("�������� abcd: %d\n", trie_tree.search("abcd"));
//	printf("�������� abc: %d\n", trie_tree.search("abc"));
//	printf("�������� ab: %d\n", trie_tree.search("ab"));
//	printf("�������� jiang: %d\n", trie_tree.search("jiang"));
//	cout << "<---------- ����ǰ׺ ---------->" << endl;
//	printf("����ǰ׺ a: %d\n", trie_tree.startsWith("a"));
//	printf("����ǰ׺ ab: %d\n", trie_tree.startsWith("ab"));
//	printf("����ǰ׺ j: %d\n", trie_tree.startsWith("j"));
//	cout << "<---------- ���뵥�� ---------->" << endl;
//	cout << "���뵥�� jiang " << endl;
//	trie_tree.insert("jiang");
//	printf("�������� jiang: %d\n", trie_tree.search("jiang"));
//	printf("����ǰ׺ j: %d\n", trie_tree.startsWith("j"));
//	system("pause");
//	return 0;
//}