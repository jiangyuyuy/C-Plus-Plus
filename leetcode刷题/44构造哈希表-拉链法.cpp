//#include<vector>
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<string>
//#include<queue>
//
//struct ListNode {  // 哈希表为普通的单链表组成
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//
//int hash_func(int key, int table_len) {
//	return key % table_len;  // 整数哈希函数，直接取余
//}
//
//void insert(ListNode* hash_table[], ListNode* insert_node, int table_len) {
//	int hash_key = hash_func(insert_node->val, table_len);
//	insert_node->next = hash_table[hash_key];  // 使用头插法插入节点
//	hash_table[hash_key] = insert_node;
//}
//
//bool search(ListNode* hash_table[], int value, int table_len) {
//	int hash_key = hash_func(value, table_len);
//	ListNode* head = hash_table[hash_key];
//	while (head) {
//		if (head->val == value) {
//			return true;
//		}
//		head = head->next;
//	}
//	return false;
//}
//
//int main() {
//	const int TABLE_LEN = 11;
//	ListNode* hash_table[TABLE_LEN] = { 0 };
//	vector<ListNode*>hash_node_vec;
//	int test[8] = { 1,1,4,9,20,30,150,500 };
//	for (int i = 0; i < 8; i++) {
//		hash_node_vec.push_back(new ListNode(test[i]));
//	}
//	for (int i = 0; i < hash_node_vec.size(); i++) {
//		insert(hash_table, hash_node_vec[i], TABLE_LEN);
//	}
//	// 插入元素
//	cout << "Hash Table: " << endl;
//	for (int i = 0; i < TABLE_LEN; i++) {
//		printf("[%d]:", i);
//		ListNode* head = hash_table[i];
//		while (head) {
//			printf("->%d", head->val);
//			head = head->next;
//		}
//		cout << endl;
//	}
//	// 查找元素
//	cout << "Test Search: " << endl;
//	for (int i = 0; i < 10; i++) {
//		if (search(hash_table, i, TABLE_LEN)) {
//			printf("%d is in the hash table.\n", i);
//		}
//		else {
//			printf("%d not is in the hash table.\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}