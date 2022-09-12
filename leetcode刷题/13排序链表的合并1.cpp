//#include<iostream>
//#include<set>
//#include<vector>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//	// ֻ����������ĺϲ�����
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		ListNode temp_head(0);  // ������ʱͷ�ڵ�
//		ListNode* pre = &temp_head;  // ʹ�� pre ָ��ָ����ʱͷ�ڵ�
//		while (l1 && l2) {
//			if (l1->val < l2->val) {
//				pre->next = l1;
//				l1 = l1->next;
//			}
//			else {
//				pre->next = l2;
//				l2 = l2->next;
//			}
//			pre = pre->next;
//		}
//		if (l1) {
//			pre->next = l1;  // �� l1 �ӵ� pre ����
//		}
//		if (l2) {
//			pre->next = l2;  // �� l2 �ӵ� pre ����
//		}
//		return temp_head.next;
//	}
//
//	// ���ε�ʵ��
//	ListNode* mergeKLists(std::vector<ListNode*>& lists) {
//		if (lists.size() == 0) {
//			return NULL;
//		}
//		if (lists.size() == 1) {
//			return lists[0];
//		}
//		if (lists.size() == 2) {
//			return mergeTwoLists(lists[0], lists[1]);
//		}
//		int mid = lists.size() / 2;
//		vector<ListNode*>sub1_lists;
//		vector<ListNode*>sub2_lists;
//		for (int i = 0; i < mid; i++) {
//			sub1_lists.push_back(lists[i]);
//		}
//		for (int i = mid; i < lists.size(); i++) {
//			sub2_lists.push_back(lists[i]);
//		}
//		ListNode* l1 = mergeKLists(sub1_lists);
//		ListNode* l2 = mergeKLists(sub2_lists);
//		return mergeTwoLists(l1, l2);
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