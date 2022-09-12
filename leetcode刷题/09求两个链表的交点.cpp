//#include<iostream>
//#include<set>
//using namespace std;
//
//struct ListNode {
//	int val;  // ������
//	ListNode* next;  // ָ����
//	ListNode(int x) :val(x), next(NULL) {}  // ���캯��
//};
//
//
//// ���� 1
//class Solution1 {
//public:
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		std::set<ListNode*>node_set;
//		while (headA) {
//			node_set.insert(headA);  // ������ A �Ľڵ���� node_set
//			headA = headA->next;
//		}
//		while (headB) {
//			if (node_set.find(headB) != node_set.end()) {
//				return headB;
//				// ���� headB ���ҵ���һ�������� node_set �еĽڵ�ʱ
//			}
//			headB = headB->next;  // �������� B
//		}
//		return NULL;
//	}
//};
//
//// ���� 2
//int get_list_length(ListNode* head) {  // ��������ĳ���
//	int len = 0;
//	while (head) {
//		len++;
//		head = head->next;
//	}
//	return len;
//}
//
//ListNode* forward_long_list(int long_len, int short_len, ListNode* head) {
//	int delta = long_len - short_len;
//	while (head && delta) {
//		head = head->next;
//		delta--;
//	}
//	return head;
//}
//
//class Solution2 {
//public:
//	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//		int list_A_len = get_list_length(headA);
//		int list_B_len = get_list_length(headB);
//		if (list_A_len > list_B_len) {
//			headA = forward_long_list(list_A_len, list_B_len, headA);
//		}
//		else {
//			headB = forward_long_list(list_B_len, list_A_len, headB);
//		}
//		while (headA && headB) {
//			if (headA == headB) {
//				return headA;
//			}
//			headA = headA->next;
//			headB = headB->next;
//		}
//		return NULL;
//	}
//};
//
//int main() {
//	ListNode a1(1);
//	ListNode a2(2);
//	ListNode b1(3);
//	ListNode b2(4);
//	ListNode b3(5);
//	ListNode c1(6);
//	ListNode c2(7);
//	ListNode c3(8);
//	a1.next = &a2;
//	b1.next = &b2;
//	b2.next = &b3;
//	a2.next = &c1;
//	b3.next = &c1;
//	c1.next = &c2;
//	c2.next = &c3;
//	Solution1 solve1;
//	ListNode* result1 = solve1.getIntersectionNode(&a1, &b1);
//	cout << result1->val << endl;
//
//	Solution2 solve2;
//	ListNode* result2 = solve2.getIntersectionNode(&a1, &b1);
//	cout << result2->val << endl;
//
//	system("pause");
//	return 0;
//}