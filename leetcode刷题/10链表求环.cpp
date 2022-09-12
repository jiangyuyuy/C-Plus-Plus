//#include<iostream>
//#include<set>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(NULL) {}
//};
//
//// �ü��� set
//class Solution1 {
//public:
//	ListNode* detectCycle(ListNode* head) {
//		std::set<ListNode*> node_set;
//		while (head) {
//			if (node_set.find(head) != node_set.end()) {
//				return head;
//			}
//			node_set.insert(head);  // ����Ԫ��
//			head = head->next;
//		}
//		return NULL;  // û������������NULL
//	}
//};
//
//// ����ָ��
//class Solution2 {
//public:
//	ListNode* detectCycle(ListNode* head) {
//		ListNode* fast = head;  // �����ָ��
//		ListNode* slow = head;  // ������ָ��
//		ListNode* meet = NULL;
//		while (fast) {
//			slow = slow->next;
//			fast = fast->next;
//			if (!fast) {
//				return NULL;  // ��� fast ��������β���򷵻� NULL
//			}
//			fast = fast->next;  // fast ��ǰ����һ��
//			if (fast == slow) {
//				meet = fast;  // fast �� slow ��������¼����λ��
//				break;
//			}
//		}
//		if (meet == NULL) {
//			return NULL;  // ���û����������˵���޻�
//		}
//		while (head && meet) {
//			if (head == meet) {
//				return head;
//			}
//			head = head->next;
//			meet = meet->next;
//		}
//		return NULL;
//	}
//};
//
//int main() {
//	ListNode a(1);
//	ListNode b(2);
//	ListNode c(3);
//	ListNode d(4);
//	ListNode e(5);
//	ListNode f(6);
//	ListNode g(7);
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//	e.next = &f;
//	f.next = &g;
//	g.next = &c;
//
//	Solution1 solve1;
//	ListNode* node1 = solve1.detectCycle(&a);
//	if (node1) {
//		cout << "CycleNode: " << node1->val << endl;
//	}
//	else {
//		cout << "CycleNode: " << NULL << endl;
//	}
//
//	Solution2 solve2;
//	ListNode* node2 = solve2.detectCycle(&a);
//	if (node2) {
//		cout << "CycleNode: " << node2->val << endl;
//	}
//	else {
//		cout << "CycleNode: " << NULL << endl;
//	}
//	system("pause");
//	return 0;
//}