//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(NULL) {}
//};
//
//bool cmp(const ListNode* a, const ListNode* b) {
//	return a->val < b->val;
//}
//
//class Solution {
//public:
//	ListNode* mergeKLists(std::vector<ListNode*>& lists) {
//		std::vector<ListNode*>node_vec;
//		for (int i = 0; i < lists.size(); i++) {  // 遍历 k 个链表
//			ListNode* head = lists[i];
//			while (head) {
//				node_vec.push_back(head);
//				head = head->next;
//			}
//		}
//		if (node_vec.size() == 0) {
//			return NULL;
//		}
//		std::sort(node_vec.begin(), node_vec.end(), cmp);  
//		// 根据节点数值进行排序
//		for (int i = 1; i < node_vec.size(); i++) {
//			node_vec[i - 1]->next = node_vec[i];
//		}
//		node_vec[node_vec.size() - 1]->next = NULL;
//		return node_vec[0];
//	}
//};
//
//int main() {
//	ListNode a(1);
//	ListNode b(4);
//	ListNode c(6);
//	ListNode d(0);
//	ListNode e(5);
//	ListNode f(7);
//	ListNode g(2);
//	ListNode h(3);
//	a.next = &b;
//	b.next = &c;
//	d.next = &e;
//	e.next = &f;
//	g.next = &h;
//
//	Solution solve;
//	vector<ListNode*>lists;
//	lists.push_back(&a);
//	lists.push_back(&d);
//	lists.push_back(&g);
//	ListNode* head = solve.mergeKLists(lists);
//	cout << "head->val: ";
//	while (head) {
//		cout << head->val << " ";
//		head = head->next;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}