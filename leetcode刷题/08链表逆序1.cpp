//#include<iostream>
//using namespace std;
//
//struct ListNode {
//	int val;  // ������
//	ListNode* next;  // ָ����
//	ListNode(int x) :val(x), next(NULL) {}  // ���캯��
//};
//
//class Solution {
//public:
//	ListNode* reverseList(ListNode* head) {  // ��������ͷ�ڵ�ָ��
//		ListNode* new_head = NULL;  // ָ��������ͷ�ڵ��ָ��
//		while (head) {
//			ListNode* next = head->next;  // ���� head->next
//			head->next = new_head;  // ���� head->next
//			new_head = head;  // ���� new_head
//			head = next;  // ��������
//		}
//		return new_head;
//	}
//};
//
//int main() {
//	ListNode a(1);
//	ListNode b(2);
//	ListNode c(3);
//	ListNode d(4);
//	ListNode e(5);
//	a.next = &b;
//	b.next = &c;
//	c.next = &d;
//	d.next = &e;
//	Solution solve;
//	ListNode* head = &a;
//	cout << "����ǰ��" << endl;
//	cout << "head_val: ";
//	while (head) {
//		cout << head->val << "  ";
//		head = head->next;
//	}
//	cout << endl;
//	head = solve.reverseList(&a);
//	cout << "���ú�" << endl;
//	cout << "head_val: ";
//	while (head) {
//		cout <<  head->val << "  ";
//		head = head->next;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//
//}