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
//	ListNode* reverseList(ListNode* head, int m, int n) {
//		int change_len = n - m + 1;  // ��Ҫ���õĽڵ���
//		ListNode* pre_head = NULL;  // ��ʼ����ʼ���ýڵ��ǰ��, �ڵ�1
//		ListNode* result = head;  // ����ת���������ͷ�ڵ㣬�����������Ϊ head
//		while (head && --m) {  // �� head ��ǰ�ƶ� m-1 ��λ��
//			pre_head = head;  // ��¼ head ǰ��
//			head = head->next;
//		}
//		ListNode* modify_list_tail = head;
//		ListNode* new_head = NULL;
//		while (head && change_len) {
//			ListNode* next = head->next;
//			head->next = new_head;
//			new_head = head;
//			head = next;
//			change_len--;  // ÿ���һ���ڵ����ã�change_len - 1
//		}
//		modify_list_tail->next = head;  // �����û��������β�����öεĺ�һ���ڵ�
//
//		if (pre_head) {
//			pre_head->next = new_head;
//		}
//		else {
//			result = new_head;
//		}
//		return result;
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
//	head = solve.reverseList(&a, 2, 4);
//	cout << "���ú�" << endl;
//	cout << "head_val: ";
//	while (head) {
//		cout << head->val << "  ";
//		head = head->next;
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}