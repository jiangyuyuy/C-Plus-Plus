//#include<iostream>
//#include<set>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) :val(x), next(NULL) {}
//};
//
//// ˼·��������ʱ�ڵ�
//class Solution {
//public:
//	ListNode* partition(ListNode* head, int x) {
//		ListNode less_head(0);
//		ListNode more_head(0);  // ����������ʱ��ͷ�ڵ�
//		ListNode* less_ptr = &less_head;
//		ListNode* more_ptr = &more_head;  // ����ͷ�ڵ��Ӧ��ָ��
//		while (head) {
//			if (head->val < x) {
//				less_ptr->next = head;
//				less_ptr = head;
//			}
//			else {
//				more_ptr->next = head;
//				more_ptr = head;
//			}
//			head = head->next;
//		}
//		less_ptr->next = more_head.next;
//		more_ptr->next = NULL;
//		// less_head �� next �ڵ㼴Ϊ������ͷ�ڵ�
//		return less_head.next;
//	}
//};
//
//int main() {
//	ListNode a(1);
//	ListNode b(4);
//	ListNode c(3);
//	ListNode d(2);
//	ListNode e(5);
//	ListNode f(2);
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//	e.next = &f;
//
//	ListNode* head_ = &a;
//	cout << "old_val: ";
//	while (head_) {
//		cout << head_->val << " ";
//		head_ = head_->next;
//	}
//	cout << endl;
//
//	Solution solve1;
//	ListNode* head = solve1.partition(&a, 3);
//	cout << "new_val: ";
//	while (head) {
//		cout  << head->val << " ";
//		head = head->next;
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
